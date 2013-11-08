void pop (STACK *stack, int *val)
{
	int x;
	x = stack -> count - 1;
	*val = stack -> elem[x];
	stack -> elem[x] = 0;
	(stack -> count)--;
}