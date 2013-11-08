#include "KMP.h"
#include "BM.h"
#include "RK.h"

void Search()
{
	char word[255],txt[255];
	int choose =- 1;
	while (choose != 0)
	{
		cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
		cout << "¬ыберите алгоритм поиска:\n";
		cout << "1:  нута-ћорриса-ѕратта\n";
		cout << "2: Ѕойера-ћура.\n";
		cout << "3: –абинаЧ арпа\n";
		cout << "\n0: ¬ыход\n";
		cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
		cin >> choose;
		if (choose >= 1 && choose <= 3)
		{
			cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
			*txt = *word = 0;
			cout << "¬ведите строку в которой следует произвести поиск:\n";
			while (*txt == 0) gets_s(txt);
			cout << "¬ведите искомое слово:\n";
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
					cout << "¬ы ввели неверное значение! ѕовторите ввод:\n";
					break;
				}
			}
			cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
			if (res.begin != -1) output(res);
			else cout << "Ќет совпадений.\n";
		}
	}
}