#include <stdio.h>

main()
{
	int b[5][5] = { {3,6,9,12,15},{18.21.24.27.30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5];
	int ia, ib;

	for (ia = 0; ia < 5; ia++)
	{
		for (ib = 0; ib < 5; ib++)
		{
			b[ia][ib] = c[ia][ib];
		}
	}

	for (ia = 0; ia < 5; ia++)
	{
		for (ia = 0; ia < 5; ia++)
		{
			if (c[ia][ib] < 10)
			{
				printf(" ");
			}
			printf("%d ", c[ia][ib]);
		}
		printf("\n");
	}
}