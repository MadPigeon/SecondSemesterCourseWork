void clear (STACK *stack)
{
	cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
	int i, x;
	x = stack -> count;
	cout << "���� ������\n";
	for (i = 0; i < x; i++) stack -> elem[i] = 0;
	stack -> count = 0;
}