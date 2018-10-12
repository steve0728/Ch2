#include <stdio.h>
#include <stdlib.h>

int Han_Xin_5()
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp;
	int temp2;

printf("(5) \n");
temp = 0;
temp2 = 9;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		if ((j == temp) || (j == temp2))
		{
			printf("%c", sign);

		}
		else
		{
			printf("%c", sign2);
		}
	}
	temp++;
	temp2--;
	printf("\n");
}

}