#include <stdio.h>

int main ()
{
	int rows, columns;

	printf ("Enter rows: ");
	scanf ("%d", &rows);
	printf ("Enter columns: ");
	scanf ("%d", &columns);

	//отвечает за то, сколько раз мы пойдем вниз
	for(int i = 1; i <= rows; ++i) 
	{
		printf ("\n");

		//отвечает за * сверху вниз в колонне
		for (int j = 1; j <= columns; ++j)
		{
			if (i % 2 == 1)
			printf ("* ");

			//if (((i * j) % 2) ==  0)
				//printf ("o ");
			//if ( i == j || i % 2 == 0)
				//printf ("o ");
		}
	}
		
	return 0;
}