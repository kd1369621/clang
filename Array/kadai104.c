#include <stdio.h>

main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int w, ia, ib;
	w = 0;

	for (ia = 0; ia < 5; ia++)
	{
		for (ib = 0; ib < 5; ib++)
		{
			w = a[ia][ib];
			a[ia][ib] = b[ia][ib];
			b[ia][ib] = w;
		}
	}
	printf("”z—ñ a\n");
	for (ia = 0; ia < 5; ia++)
	{
		for (ib = 0; ib < 5; ib++)
		{
			if (a[ia][ib] < 10)
			{
				printf(" ");
			}
			printf("%d ", a[ia][ib]);
		}
		printf("\n");
	}
	printf("”z—ñ b\n");
	for (ia = 0; ia < 5; ia++)
	{
		for (ib = 0; ib < 5; ib++)
		{
			if( b[ia][ib] < 10)
			{
				printf(" ");
			}
			printf("%d ", b[ia][ib]);
		}
		printf("\n");
	}
}