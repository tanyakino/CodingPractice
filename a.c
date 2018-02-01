#include <stdio.h>

int main ()
{
	int n, range;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Enter the range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; ++i)
    {
    	printf ("%d ", i);

    } 

    printf ("\n");

    for (int j = 1; j <= range; ++j)
    {
    	printf ("%d ", j * 2);
    }

	printf ("\n");

	for (int q = 1; q <= range; ++q)
    {
    	printf ("%d ", q * 3);
    }

	printf ("\n");

	for (int z = 1; z <= range; ++z)
	{
		printf ("%d ", z * 4);
	}

	printf ("\n");

    for(int i = 1; i <= range; ++i)
    {
    	printf("%d ", n*i);
    }


	return 0;
}