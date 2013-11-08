#include "binTreeCreateFirstElement.h"	// �������� ������� ���� ������,� �������� �� ����������
#include "binTreeInsert.h"
#include "binTreeDelete.h"
#include "binTreeBalance.h"
#include "binTreePrint.h"

int pos=0;

int binTree()
{
	int i, n, choose=-1, j;

	cout << "������� ���������� ��������� �����:\n";
	cin >> n;
	int *array = new int[n];
	int *q = new int[n];
	for (i = 0; i < n; i++) array[i] = rand()%99;
	cout << "������� �������� �����:\n";
	cin >> j;
	node *root = CreateFirstElement(j);
	for(i = 0; i < n; i++) treeInsert(root, array[i]); 
	cout << "---------------------------------------\n";
	cout << "���������� ������:\n";
	print_tree(root, 0);
	//
	cout << "---------------------------------------\n";
	while (choose!=0)
	{
		cout << "�������� ��������:\n";
		cout << "1:���������� ��������\n";
		cout << "2:�������� ��������\n";
		cout << "3:����� ������\n";
		cout << "0:�����\n";
		cin >> choose;
		switch (choose)
		{
			case 1:
			{
				cout << "---------------------------------------\n";
				cout << "������� ����������� �������:\n";
				cin >> i;
				treeInsert(root, i); 
				n++;
				cout << "---------------------------------------\n";
				break;
			}
			case 2:
			{
				cout << "---------------------------------------\n";
				cout << "������� ��������� �������:";
				cin >> i;
				if(i != root -> key)
				{
					Delete(root, i);
					print_tree(root, 0);
				}
				else cout << "��� �������� ������� ������";
				cout << "---------------------------------------\n";
				break;
			}
			case 3:
			{
				cout << "---------------------------------------\n";
				pos = 0;
				root = balance(array, n - 1, 0);
				cout << "���������������� ������:\n";
				print_tree(root, 0);
				cout << "---------------------------------------\n";
				break;
			}
			case 4:
			{
				cout << "---------------------------------------\n";
				print_tree(root, 0);
				cout << "---------------------------------------\n";
				break;
			}
			case 0:
			{
				break;
			}
		}
	}
	system("pause");
	return 0;
} 



