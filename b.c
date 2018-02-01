#include <stdio.h>

int main ()
{
	int n, range;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Enter the range: ");
    scanf("%d", &range);

    for (int i = 1, j = 1; i <= range; ++i)
    {
    	printf ("%d , %d ", i, i * j);
    	j = j + 2;

    } 

    return 0;
}