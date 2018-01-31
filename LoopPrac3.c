#include <stdio.h>

int main ()
{
	int n;

	printf ("Enter the number: ");
	scanf ("%d", &n);

	for (int i = 1; i <= n; ++i)
	{	
		for (int j = n; j <= n; --j)
		{
			printf (".");
		}

		printf ("%d\n", i);
	}	

	return 0;
}
