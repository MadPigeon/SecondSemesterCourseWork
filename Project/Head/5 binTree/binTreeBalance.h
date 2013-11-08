node *balance(int *b,int n,int start)
{
	if(start > n)
	return 0;
	node *tree = new node;
	int midlle = (n + start) / 2;
	tree -> key = b[midlle];
	tree -> left = balance(b, midlle - 1, start);
	tree -> right = balance(b, n, midlle + 1);
	return tree;
}