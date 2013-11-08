posit KMP(const char * txt, const char * word)
{
	posit res; //вывод в main
	
	unsigned short int i = 0, j = 0,
	wordlen = strlen(word), txtlen = strlen(txt);	//замены множественного вызова strlen

	while (i <= txtlen)	//проходим по всему тексту
	{
		if (txt[i] == word[j])	//совпадение символа
		{
			i++;
			j++;
		}
		else		//сдвигаем на единицу
		{
			i -= j-1;
			j = 0;
		}
		if (j == wordlen)	//слово найдено
		{
			res.begin = i - j + 1;
			res.end = i;
			break;
		}
	}
	if (j != wordlen)	//слово не найдено
	{
		res.begin = res.end = -1;
	}
	return res;
}