node *Delete(node *root, int d)
{
	if (root != 0) 
	{
		int dir;
		if (root -> key == d) 
		{
			if (root -> left != NULL && root -> right != NULL) //если 
			{
				node *succ = root -> right;
				while (succ -> left != NULL)
				succ = succ -> left;
				d = succ -> key;
				root -> key = d;
			}
			else //если элемент листок
			{
				node *save = root;
				if (root -> left == NULL) 
				root = root -> right;
				else root = root -> left;
				free(save);
				return root;
			}
		}
		dir = root -> key <= d;
		if(dir == 1) root -> right = Delete(root -> right, d);
		else root -> left = Delete(root -> left, d);
	}
	return root;
}