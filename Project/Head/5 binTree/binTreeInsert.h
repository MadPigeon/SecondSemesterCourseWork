void treeInsert(node *&root, int newItem) 
{
	if ( root == NULL )
	{
		root = new node;
		root -> key = newItem;
		root -> left = root -> right = NULL;
		return;
	}
	else if ( newItem < root -> key )
	{
		treeInsert(root -> left, newItem);
	}
	else
	{
		treeInsert(root -> right, newItem);
	}
}