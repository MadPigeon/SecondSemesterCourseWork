#include "KMP.h"
#include "BM.h"
#include "RK.h"

void Search()
{
	char word[255],txt[255];
	int choose =- 1;
	while (choose != 0)
	{
		cout << "-------------------\n";
		cout << "ย๛แๅ๐่๒ๅ เ๋ใ๎๐่๒์ ๏๎่๑๊เ:\n";
		cout << "1: สํ๓๒เ-ฬ๎๐๐่๑เ-ฯ๐เ๒๒เ\n";
		cout << "2: ม๎้ๅ๐เ-ฬ๓๐เ.\n";
		cout << "3: ะเแ่ํเสเ๐๏เ\n";
		cout << "\n0: ย๛๕๎ไ\n";
		cout << "-------------------\n";
		cin >> choose;
		if (choose >= 1 && choose <= 3)
		{
			cout << "-------------------\n";
			*txt = *word = 0;
			cout << "ยโๅไ่๒ๅ ๑๒๐๎๊๓ โ ๊๎๒๎๐๎้ ๑๋ๅไ๓ๅ๒ ๏๐๎่็โๅ๑๒่ ๏๎่๑๊:\n";
			while (*txt == 0) gets_s(txt);
			cout << "ยโๅไ่๒ๅ ่๑๊๎์๎ๅ ๑๋๎โ๎:\n";
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
					cout << "ย๛ โโๅ๋่ ํๅโๅ๐ํ๎ๅ ็ํเ๗ๅํ่ๅ! ฯ๎โ๒๎๐่๒ๅ โโ๎ไ:\n";
					break;
				}
			}
			cout << "-------------------\n";
			if (res.begin != -1) output(res);
			else cout << "อๅ๒ ๑๎โ๏เไๅํ่้.\n";
		}
	}
}