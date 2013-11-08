/*
 ��������� n-���������� ������ ���������� ���������� �� min �� max.
 @param array	������
 @param n		���������� ��������� � �������
 @param min		����������� �������� ���������
 @param max		������������ �������� ���������
*/
void sortGen(int *array, int n, int min, int max)
{
	if (min > max)
	{
		// �����������, ��� min < max.
		swap(min,max);
	}
	for (int i = 0; i < n; i++) // ��� ������� ��������...
	{
		// ... ���������� ��������� ��������.
		array[i] = (rand() % (max - min + 1)) + min;
	}
}