posit BM(const char* txt, char* word)
{
	posit res;	//вывод результата
	res.begin = res.end = -1;
	int table[255], i, j,	//таблица символов
		txtlen = strlen(txt), wordlen = strlen(word); // однократные strlen(…)

	for(i = 0; i < 255; i++) table[i] = -1;				//пустая таблица
	for(i = 0; i < wordlen; i++) table[word[i]] = i;		//таблица со значениями

	j = 0;	//текущее местоположение
	while(j <= txtlen - wordlen)
		{
			//находим не совпадающее i с конца фрагмента
			for(i = wordlen - 1; i >= 0 && word[i] == txt[j + i]; i--);
			if(i < 0)	//совпадение найдено
			{
				res.begin = j + 1;
				break;
			}
			else
			{
				if (1 < i - table[txt[j+i]])	//смотрим совпадение в таблице
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