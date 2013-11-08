void size(STACK *stack)
{
	int x = stack -> count;
	cout << "В стэке содержится " << x << " элементов\n";
	if (x > 0)
	{
		for (int i = 0; i < x; i++)
		{
			cout << stack -> elem[i] << " ";
		}
		cout << endl;
	}
}