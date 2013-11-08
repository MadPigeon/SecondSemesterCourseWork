posit RK(const char * txt, const char * word)
{
	posit res;
	int i, j, p,
		txtsum = 0, wordsum = 0,
		txtlen = strlen(txt), wordlen = strlen(word);
	bool k = 0; // найдено ли слово

	for (i = 0; i < wordlen; i++)	//считаем сумму в тексте
	{
		txtsum += txt[i];
	}
	for (i = 0; i < wordlen; i++)	//считаем сумму в слове
	{
		wordsum += word[i];
	}

	for (i = 0; !k && i + wordlen <= txtlen; i++)
	{
		if (txtsum == wordsum)	//проверка совпадения
		{
			p = i; k = 1;		//подготовка проверки
			for (j = 0; j < wordlen; j++) 
			{
				if (word[j] != txt[p++])
				{
					k = 0;
					break;
				}
			}
		}
		txtsum -= txt[i];	//вычитаем первый символ
		txtsum += txt[i + wordlen];	//добавляем новый символ
	} 
	if (k)
	{
		res.begin = i;
		res.end = i + wordlen - 1;
	}
	else res.begin = res.end = -1;
	return res;
}