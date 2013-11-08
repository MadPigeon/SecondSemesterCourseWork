#include "KMP.h"
#include "BM.h"
#include "RK.h"

void Search()
{
	char word[255],txt[255];
	int choose =- 1;
	while (choose != 0)
	{
		cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
		cout << "�������� �������� ������:\n";
		cout << "1: �����-�������-������\n";
		cout << "2: ������-����.\n";
		cout << "3: ������������\n";
		cout << "\n0: �����\n";
		cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
		cin >> choose;
		if (choose >= 1 && choose <= 3)
		{
			cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
			*txt = *word = 0;
			cout << "������� ������ � ������� ������� ���������� �����:\n";
			while (*txt == 0) gets_s(txt);
			cout << "������� ������� �����:\n";
			while (*word == 0) gets_s(word);
			posit res;
			res.begin = res.end = -1;
			switch (choose)
			{
				case 1:
				{
					res = KMP(txt,word);
					break;
				}
				case 2:
				{
					res = BM(txt,word);
					break;
				}
				case 3:
				{
					res = RK(txt,word);
					break;
				}
				default:
				{
					cout << "�� ����� �������� ��������! ��������� ����:\n";
					break;
				}
			}
			cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
			if (res.begin != -1) output(res);
			else cout << "��� ����������.\n";
		}
	}
}