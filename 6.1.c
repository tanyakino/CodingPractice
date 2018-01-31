#include <stdio.h>

int main ()
{
	float n, max;
	max = 0;
		
	do 
	{
		printf ("Enter a number: ");
		scanf ("%f", &n);

		if (n > max)
			max = n;
	} 
	while (n > 0);

	printf ("%.2f", max);

	return 0;
}