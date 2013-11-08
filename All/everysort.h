/*
 * Сортировка Шелла(с отступами)
 * @param array массив
 * @param n     количество элементов
 */
void shell(int *array, int n)
{
	int gap = n/2;
	//имитируем foreach
	for (int i = gap; i < n; i++)
	{
		int temp = array[i];//текущий элемент для обмена
		int j;//дополнительный счётчик
		//идём к i с конца с места gap
		for (j = i; (j >= gap) && (array[j - gap] > temp); j -= gap)
		{
			array[j] = array[j - gap];//меняем элементы местами
		}
		array[j] = temp;
		if ((i==n-1) && (gap != 1))//замена внешнего цикла
		{
			gap /= 2;
			i=gap-1;
		}
	}
}

/*
 * Быстрая сортировка. Для вызова из главной
 * использовать qs(array, 0, n-1);
 * @param array массив
 * @param min	элемент начала сортировки
 * @param max	элемент конца сортировки
 */
void qs(int *array, int min, int max)
{
	if (max - min < 1)
	{
		return;
	}
	if (max - min == 1)
	{
		if (array[min] > array[max])
		{
			swap(array[min],array[max]);
		}
		return;
	}
	int	low = min - 1,
		high = max + 1,
		i = min,
		pivot = array[(min+max)/2];
	while (i < high && i <= max)
	{
		if (array[i] < pivot)
		{
			swap(array[i++],array[++low]);
		}
		else if (array[i] > pivot)
		{
			swap(array[i],array[--high]);
		}
		else i++;
	}
	qs(array, min, low);
	qs(array, high, max);
}

/*
	Вспомогательная функция, возвращающая
	массиву свойства пирамиды
*/
void shiftDown(int *array, int n)
{
	int i = 0, j;
	while (2*i+1 <= n)
	{
		j = i;
		if (2*i+2 <= n)
		{
			if (array[2*i+1] > array[2*i+2])
			{
				j = 2*i+1;
			}
			else
			{
				j = 2*i+2;
			}
		}
		else if (array[2*i+1] > array[i])
		{
			j = 2*i+1;
		}
		if (array[i] < array[j])
		{
			swap(array[i],array[j]);
			i = j;
		}
		else
		{
			break;
		}
	}
}

/*
	Вспомогательная функция, выстраивающая
	массив в пирамиду
*/
void heapify(int *array, int n)
{
	int i,j;
	for (i = 1; i < n; i++)
	{
		if (array[i]>array[(i-1)/2])
		{
			j = i;
			while (j != 0)
			{
				if (array[j]<=array[(j-1)/2])
				{
					break;
				}
				swap(array[j],array[(j-1)/2]);
				j = (j-1)/2;
			}
		}
	}
}

/*
	Непосредственно сортировка
	array — массив,
	n — его размер.
*/		
void heapSort(int *array, int n)
{
	heapify(array, n);
	int end = n-1;
	while (end > 0)
	{
		swap(array[0],array[end--]);
		shiftDown(array, end);
	}
}

/*
 Сортировка пузырьком, простейшая алгоритмическая сортировка
 @param array	массив
 @param n		размер массива
*/
void bubble(int *array, int n)
{
	int i;
	bool k = 0; // k - отсортированность массива
	n--;			//array[n] - последний элемент массива
	while (k == 0)
	{
		k = 1;
		for (i = 0; i < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i],array[i+1]);
				k = 0;
			}
		}
	}
}