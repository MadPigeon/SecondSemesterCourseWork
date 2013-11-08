int pop (STACK *stack)
{
	int x = stack -> elem[--(stack -> count)];
	stack -> elem[(stack -> count)] = 0;
	return x;
}