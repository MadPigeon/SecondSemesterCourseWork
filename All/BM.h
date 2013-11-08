posit BM(const char* txt, char* word)
{
	posit res;	//����� ����������
	res.begin = res.end = -1;
	int table[255], i, j,	//������� ��������
		txtlen = strlen(txt), wordlen = strlen(word); // ����������� strlen(�)

	for(i = 0; i < 255; i++) table[i] = -1;				//������ �������
	for(i = 0; i < wordlen; i++) table[word[i]] = i;		//������� �� ����������

	j = 0;	//������� ��������������
	while(j <= txtlen - wordlen)
		{
			//������� �� ����������� i � ����� ���������
			for(i = wordlen - 1; i >= 0 && word[i] == txt[j + i]; i--);
			if(i < 0)	//���������� �������
			{
				res.begin = j + 1;
				break;
			}
			else
			{
				if (1 < i - table[txt[j+i]])	//������� ���������� � �������
				{
					j += i - table[txt[j+i]];
				}
				else
				{
					j += 1;
				}
			}
		}
	res.end += res.begin + strlen(word);
	return res;
}