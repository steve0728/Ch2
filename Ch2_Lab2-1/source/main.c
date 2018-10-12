#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp;
	int temp2;
	

	printf("(1) \n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	printf("(2) \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 1) || (i == 2) || (i == 8) || (i == 9) || (i == 7) || (j == 1) || (j == 2) || (j == 0) || (j == 8) || (j == 9) || (j == 7))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
			printf("\n");
	}
	printf("(3) \n");
	temp = 4;
	temp2 = 5;
	for (i = 0; i < 10; i++)
	{ 
		for (j = 0; j < 10; j++)
		{
			if ((i==4) || (j==temp) || (j==temp2) )
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
	printf("(4) \n");
	temp = 0;
	temp2 = 9;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i<5&&((i == 0) || (j == temp) || (j == temp2)))
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
	system("pause");
	return 0;
}