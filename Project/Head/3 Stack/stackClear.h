void clear (STACK *stack)
{
	cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
	int i, x;
	x = stack -> count;
	cout << "—тэк очищен\n";
	for (i = 0; i < x; i++) stack -> elem[i] = 0;
	stack -> count = 0;
}