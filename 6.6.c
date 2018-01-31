#include <stdio.h>

int main ()
{
	int i, n, square;

	printf ("Enter a number: ");
	scanf ("%d", &n);

	for (i = 1; i <= n; i++)
	{
		square = i * i;

		if(square > n)
			break;

		if (i % 2 == 0)
			printf ("%d\n\n", square);	

	}

	return 0;
}