#include <iostream>
using namespace std;
#include "all.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	int choose =- 1;
	while (choose != 0)
	{
		cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
		cout << "�������� ��������: \n";
		cout << "1: ���������� �������. \n";
		cout << "2: ����� ��������� � ������. \n";
		cout << "3: ������ �� ������. \n";
		cout << "4: �������� �������� ������. \n";
		cout << "5: �������� ������. \n";
		cout << "\n0: ����� \n";
		cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
		cin >> choose;
		cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
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
			S��R��
			default:
			{
				cout << "�� ����� �������� ��������! ��������� ����:\n";
				break;
			}
		}
	}
}