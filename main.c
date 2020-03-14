#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void swap(int* a, int* b)
{
	int o = *a;
	*a = *b;
	*b = o;
}

void sort(int x, int* y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 1; j < (x - i); j++)
		{
			if (y[j] < y[j - 1])
			{
				swap(&y[j], &y[j - 1]);
			}
		}
	}
}

int main()
{
	printf("Savin Borislav, group 1142\n");
	printf("\n");
	printf("HomeWork 3\n");
	printf("\n");
	int x;
	printf("Size massiva:");
	scanf("%d", &x);
	int* y = (int*)calloc(x, sizeof(int));
	printf("\n");
	printf("Completed massiv:");
	for (int i = 0; i < x; i++)
	{
		y[i] = x - i;
	    printf("%d ", y[i]);
	}
	sort(x, y);
	printf("\n");
	printf("\n");
	printf("The result of sorting:");
	for (int i = 0; i < x; i++)
	{
		printf("%d ", y[i]);
	}
	free(y);
	getchar();
	return 0;
}
