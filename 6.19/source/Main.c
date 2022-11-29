#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(0));
	int dice[13] = { 0 };
	int i;

	int n1, n2, n3;
	for (i = 0; i < 36000; i++)
	{
		n1 = (rand() % 6) + 1;
		n2 = (rand() % 6) + 1;
		n3 = n1 + n2;
		dice[n3]++;
	}

	printf("點數總出現次數:\n");
	for (int j = 2; j <= 12; j++)
	{
		printf("%d:%d\n", j, dice[j]);
	}

	system("pause");
	return 0;
}