void push(STACK *stack, int val)
{
	int x;
	x = stack -> count;
	stack -> elem[x] = val;
	(stack -> count)++;
}