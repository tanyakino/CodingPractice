#include <stdio.h>

int main ()
{
	int number;

	int answer = 1;

	printf ("Enter the number: ");
	scanf ("%d", &number);

	for (int n = 1; n <= number; ++n)
	{ 
		printf ("%d! = ", number);

		for (int j = number; j > 0; --j)
		{
			if (j != 1)
				printf ("%d * ", j);
			else
				printf ("1 = ");

			answer *= j;
		}

		printf("%d\n", answer);
    }
		return 0;
}