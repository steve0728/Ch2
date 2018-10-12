#include <stdio.h>
#include <stdlib.h>

int Han_Xin_3()
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp;
	int temp2;


printf("(3) \n");
temp = 4;
temp2 = 5;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		if ((i == 4) || (j == temp) || (j == temp2))
		{
			printf("%c", sign);

		}
		else
		{
			printf("%c", sign2);
		}
	}
	temp--;
	temp2++;
	printf("\n");
}

}