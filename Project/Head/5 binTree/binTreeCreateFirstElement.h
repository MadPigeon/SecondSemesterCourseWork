node *CreateFirstElement(int value)
{
	node *pv = new node;
	pv -> key = value;
	pv -> left = 0;
	pv -> right = 0;
	return pv;
} 