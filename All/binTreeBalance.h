// ������������ ������
node *balance(node *root, int num)
{
    char **arr;
    arr=(char**)calloc(num,sizeof(char*));     // �������� ������ ��� �������
    for(int i=0; i<num; i++)
        arr[i]=(char*)calloc(50,sizeof(char));

    ind=0; // �������� ������ ��� �������

    fill_array(root,arr);   // ��������� ������
    free_tree(root);        // ������� ������ ������
    root=new_tree(arr, 0, num-1);      // ��������� ����� ������ ���������������

    for(int i=0; i<num; i++)  // ������� ������ �������
        free(arr[i]);
    free(arr);

    return root;
}
/*node *balance(int *b, int n, int start)
{
	if(start > n)
	return 0;
	node *tree = new node;
	int midlle = (n + start) / 2;
	tree -> key = b[midlle];
	tree -> left = balance(b, midlle - 1, start);
	tree -> right = balance(b, n, midlle + 1);
	return tree;
}*/