#include <stdio.h>

main()
{
	int a[5][5] = { {1,2,3,4,5 }, { 6,7,8,9,10 }, { 11,12,13,14,15 }, { 16,17,18,19,20 }, { 21,22,23,24,25 }};
	int ia, ib;

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
}