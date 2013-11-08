#include "binTreeCreateFirstElement.h"	// —оздание первого узла дерева,с которого всЄ начинаетс€
#include "binTreeInsert.h"
#include "binTreeDelete.h"
#include "binTreeBalance.h"
#include "binTreePrint.h"

void binTree()
{
	int i, n, choose=-1, j;

	cout << "¬ведите количество элементов дерева:\n";
	cin >> n;
	int *array = new int[n];
	int *q = new int[n];
	for (i = 0; i < n; i++) array[i] = rand()%99;
	j = rand()%99;
	node *root = CreateFirstElement(j);
	for(i = 0; i < n; i++) treeInsert(root, array[i]); 
	cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
	cout << "ѕолученное дерево:\n";
	root = balance(array, n - 1, 0);
	print_tree(root, 0);
	//
	cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
	while (choose!=0)
	{
		cout << "¬ыберите действие:\n";
		cout << "1:добавление элемента\n";
		cout << "2:удаление элемента\n";
		cout << "3:вывод дерева\n";
		cout << "0:выход\n";
		cin >> choose;
		switch (choose)
		{
			case 1:
			{
				cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
				cout << "¬ведите добавл€емый элемент:\n";
				cin >> i;
				treeInsert(root, i); 
				n++;
				cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
				break;
			}
			case 2:
			{
				cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
				cout << "¬ведите удал€емый элемент:";
				cin >> i;
				if(i != root -> key)
				{
					Delete(root, i);
					root = balance(array, n - 1, 0);
					print_tree(root, 0);
				}
				else cout << "Ёто значение удалить нельз€";
				cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
				break;
			}
			case 3:
			{
				cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
				root = balance(array, n - 1, 0);
				print_tree(root, 0);
				cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
				break;
			}
			case 0:
			{
				break;
			}
		}
	}
}



