posit RK(const char * txt, const char * word)
{
	posit res;
	int i, j, p,
		txtsum = 0, wordsum = 0,
		txtlen = strlen(txt), wordlen = strlen(word);
	bool k = 0; // ������� �� �����

	for (i = 0; i < wordlen; i++)	//������� ����� � ������
	{
		txtsum += txt[i];
	}
	for (i = 0; i < wordlen; i++)	//������� ����� � �����
	{
		wordsum += word[i];
	}

	for (i = 0; !k && i + wordlen <= txtlen; i++)
	{
		if (txtsum == wordsum)	//�������� ����������
		{
			p = i; k = 1;		//���������� ��������
			for (j = 0; j < wordlen; j++) 
			{
				if (word[j] != txt[p++])
				{
					k = 0;
					break;
				}
			}
		}
		txtsum -= txt[i];	//�������� ������ ������
		txtsum += txt[i + wordlen];	//��������� ����� ������
	} 
	if (k)
	{
		res.begin = i;
		res.end = i + wordlen - 1;
	}
	else res.begin = res.end = -1;
	return res;
}