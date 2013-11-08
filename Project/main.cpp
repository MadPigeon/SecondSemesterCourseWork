#include <iostream>
using namespace std;
#include "all.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	int choose =- 1;
	while (choose != 0)
	{
		cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
		cout << "¬ыберите действие: \n";
		cout << "1: —ортировка массива. \n";
		cout << "2: ѕоиск подстроки в строке. \n";
		cout << "3: –абота со стеком. \n";
		cout << "4: ќбратна€ польска€ запись. \n";
		cout << "5: Ѕинарное дерево. \n";
		cout << "\n0: ¬ыход \n";
		cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
		cin >> choose;
		cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
		switch (choose)
		{
			case 1:
			{
				Sort();
				break;
			}
			case 2:
			{
				Search();
				break;
			}
			case 3:
			{
				Stack();
				break;
			}
			case 4:
			{
				RevPolish();
				break;
			}
			case 5:
			{
				binTree();
				break;
			}
			S≈—R≈“
			default:
			{
				cout << "¬ы ввели неверное значение! ѕовторите ввод:\n";
				break;
			}
		}
	}
}