#include "symbol.h"	// вставл€ет в вывод знаки мат. операций
//(13-2*(10/5+2*4)*(15/3+6/2)/(14-14/7)-12)/(14/7+2*4-5)+12/6-2
void RevPolish()
{
	STACK stack;
	int i = 0, x = 0, val = 0;
	char expression[255];

	stack.count = 0;
	*expression = 0;
	cout << "¬ыбрана работа с обратной польской записью. \n";
	cout << "Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч-Ч\n";
	cout<<"¬ведите выражение: \n";
	while (*expression == 0) gets_s(expression);
	x = strlen(expression);
	for(i = 0; i < x; i++)
	if ((expression[i] >= '0') && (expression[i] <= '9')) cout << expression[i];
	else
	{
		cout << " ";
		val = LastElement(&stack);
		switch(expression[i])
		{
			case ('('): // открывающа€ скобка, приоритет 1
			{
				// 1-значит скобка!
				push(&stack, 1);
				break;
			}
			case (')'): 
			{
				val = -1;
				while (val != 1)
				{
					val = pop(&stack);
					symbol(val);
				}
				break;
			}
			// дофига "if"ов и молитв дл€ избежани€ ошибок
			case ('+'):
			{				
				if ((stack.count == 0) || (val == 1))	// ≈сли стак пуст или последний элемент скобка
					push(&stack, 2);		//  идаем плюс в стак
				else
				{
					while ((val >= 2) && (val <= 5)) 
					{
						if (stack.count == 0) val = 0;	// заканчиваем
						if (stack.count > 0) val = pop(&stack);	// извлекаем последний
						if ((val >= 2) && (val <= 5))	symbol(val);
					}
					push(&stack,2); 
				}
				break;
			}
			case ('-'):
			{
				if ((stack.count == 0) || (val == 1)) push(&stack, 3); 
				else
				{
					while ((val >= 2) && (val <= 5)) 
					{
						if (stack.count == 0)			val=0;
						if (stack.count > 0)				val = pop(&stack);	
						if ((val >= 2) && (val <= 5))	symbol(val);
					}
					push(&stack, 3); 
				}
				break;
			}	
			case ('*') :
			{
				if ((stack.count == 0) || (val == 1)) push(&stack, 4); 
				else
				{
					while ((val >= 4) && (val <= 5))
					{
						if (stack.count == 0)			val=0;
						if (stack.count > 0)				val = pop(&stack);
						if ((val >= 4) && (val <= 5))	symbol(val);
					}
					push(&stack, 4);
				}
				break;
			}
			case ('/') :
			{
				if ((stack.count == 0) || (val == 1)) push(&stack, 5); 
				else
				{
					while ((val >= 4) && (val <= 5)) 
					{
						if (stack.count == 0)			val=0;
						if (stack.count > 0)				val = pop(&stack);	
						if ((val >= 4) && (val <= 5))	symbol(val);
					}
					push(&stack,5); 
				}
				break;
			}					
		}
	}
	while (stack.count > 0)
	{
		val = pop(&stack);
		symbol(val);
	}
	cout << endl;
}
