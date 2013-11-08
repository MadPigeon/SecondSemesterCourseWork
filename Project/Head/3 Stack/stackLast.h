void LastElement(STACK *stack, int *val)
{
	int x = stack -> count - 1;
	*val = (stack -> elem[x]);
}