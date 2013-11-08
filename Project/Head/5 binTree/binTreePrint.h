void print_tree(node *p, int indent)
{
	if(p != NULL)
	{
		print_tree(p -> left, indent + 1);
		for(int i = 0; i < indent; i++) cout << "……";
		cout << p -> key << endl;
		print_tree(p -> right, indent + 1);
	}
}