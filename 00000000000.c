#include <stdio.h>

int main ()
{
	int columns, rows;

	printf ("Enter the number of columns: ");
	scanf ("%d", &columns);
	printf ("Enter the number of rows: ");
	scanf ("%d", &rows);

	for (int i = 1; i < columns; i++)
	{
		printf ("%d\n", i);
	}

	return 0;
}
