void size(STACK *stack)
{
	int x = stack -> count;
	cout << "� ����� ���������� " << x << " ���������\n";
	if (x > 0)
	{
		for (int i = 0; i < x; i++)
		{
			cout << stack -> elem[i] << " ";
		}
		cout << endl;
	}
}