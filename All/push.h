void push(STACK *stack, int val)
{
	stack -> elem[(stack -> count)++] = val;
}