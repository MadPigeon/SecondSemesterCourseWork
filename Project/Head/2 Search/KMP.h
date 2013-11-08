posit KMP(const char * txt, const char * word)
{
	posit res; //����� � main
	
	unsigned short int i = 0, j = 0,
	wordlen = strlen(word), txtlen = strlen(txt);	//������ �������������� ������ strlen

	while (i <= txtlen)	//�������� �� ����� ������
	{
		if (txt[i] == word[j])	//���������� �������
		{
			i++;
			j++;
		}
		else		//�������� �� �������
		{
			i -= j-1;
			j = 0;
		}
		if (j == wordlen)	//����� �������
		{
			res.begin = i - j + 1;
			res.end = i;
			break;
		}
	}
	if (j != wordlen)	//����� �� �������
	{
		res.begin = res.end = -1;
	}
	return res;
}