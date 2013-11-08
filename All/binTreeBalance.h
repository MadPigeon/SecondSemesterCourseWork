// Балансировка дерева
node *balance(node *root, int num)
{
    char **arr;
    arr=(char**)calloc(num,sizeof(char*));     // Выделяем память для массива
    for(int i=0; i<num; i++)
        arr[i]=(char*)calloc(50,sizeof(char));

    ind=0; // Обнуляем индекс для массива

    fill_array(root,arr);   // Заполняем массив
    free_tree(root);        // Очищаем старое дерево
    root=new_tree(arr, 0, num-1);      // Заполняем новое дерево сбалансированно

    for(int i=0; i<num; i++)  // Очищаем память массива
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