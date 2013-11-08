/*
 «аполн€ет n-элементный массив случайными значени€ми от min до max.
 @param array	массив
 @param n		количество элементов в массиве
 @param min		минимальное значение генерации
 @param max		максимальное значение генерации
*/
void sortGen(int *array, int n, int min, int max)
{
	if (min > max)
	{
		// √арантируем, что min < max.
		swap(min,max);
	}
	for (int i = 0; i < n; i++) // ƒл€ каждого элемента...
	{
		// ... генерируем случайное значение.
		array[i] = (rand() % (max - min + 1)) + min;
	}
}