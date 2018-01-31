

#include <stdio.h>

int main ()
{
	
	int n, factorial;
	float e;

	printf ("Enter a number: ");
	scanf ("%d", &n);

	factorial = 1;
	e = 1.0f;

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < (n - j) - 1; i++)
		{
			printf("%d *= %d\n", factorial, (n - j) - i);
			factorial *= ((n - j) - i);
		}

		printf("%d factorial is = %d\n", n - j, factorial);

		e += (1.0f/factorial);
		factorial = 1;
	}

	printf ("%.2f", e);

	return 0;
}


