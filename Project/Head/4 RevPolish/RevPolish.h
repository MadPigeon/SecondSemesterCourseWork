#include "symbol.h"	// ��������� � ����� ����� ���. ��������

void RevPolish()
{
	STACK stack;
	int i = 0, x = 0, val = 0;
	char expression[255];

	stack.count = 0;
	*expression = 0;
	cout << "������� ������ � �������� �������� �������. \n";
	cout << "�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�-�\n";
	cout<<"������� ���������: \n";
	while (*expression == 0) gets_s(expression);

	for(i = 0; i < strlen(expression); i++)
	if ((expression[i] >= '0') && (expression[i] <= '9')) cout << expression[i];
	else
	{
		cout << " ";
		switch(expression[i])
		{
			case ('('): // ����������� ������, ��������� 1
			{
				// 1-������ ������!
				push(&stack, 1);
				break;
			}      // ***   
			case (')'): 
			{
				val = -1;
				while (val != 1)
				{
					pop(&stack, &val);
					symbol(val);
				}
				break;
			}     
			case ('+'): // ������ "if"��-��� ��������� ������
			{
				LastElement(&stack, &val);
				if ((stack.count == 0) || (val == 1))	push(&stack, 2); 
				else
				{
					while ((val >= 2) && (val <= 5)) 
					{
						if (stack.count == 0)			val=0;
						if (stack.count > 0)				pop(&stack, &val);
						if ((val >= 2) && (val <= 5))	symbol(val);
					}
					push(&stack,2); 
				}
				break;
			}	
			case ('-'):
			{
				LastElement(&stack, &val);
				if ((stack.count == 0) || (val == 1)) push(&stack, 3); 
				else
				{
					while ((val >= 2) && (val <= 5)) 
					{
						if (stack.count == 0)			val=0;
						if (stack.count > 0)				pop(&stack, &val);	
						if ((val >= 2) && (val <= 5))	symbol(val);
					}
					push(&stack, 3); 
				}
				break;
			}	
			case ('*') :
			{
				LastElement(&stack, &val);
				if ((stack.count == 0) || (val == 1)) push(&stack, 4); 
				else
				{
					while ((val >= 4) && (val <= 5))
					{
						if (stack.count == 0)			val=0;
						if (stack.count > 0)				pop(&stack, &val);
						if ((val >= 4) && (val <= 5))	symbol(val);
					}
					push(&stack, 4);
				}
				break;
			}
			case ('/') :
			{
				LastElement(&stack, &val);
				if ((stack.count == 0) || (val == 1)) push(&stack, 5); 
				else
				{
					while ((val >= 4) && (val <= 5)) 
					{
						if (stack.count == 0)			val=0;
						if (stack.count > 0)				pop(&stack, &val);	
						if ((val >= 4) && (val <= 5))	symbol(val);
					}
					push(&stack,5); 
				}
				break;
			}					
		}
	}
	while (stack.count>0)
	{
		pop(&stack,&val);
		symbol(val);
	}
	cout << endl;
}