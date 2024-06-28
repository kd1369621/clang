#include <stdio.h>

main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int ia, ib;

	for (ia = 9, ib = 0; ib < 10; ia--, ib++)
	{
		c[ib] = a[ia];
	}

	printf("”z—ñ a = ");
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", a[ia]);
	}

	printf("\n”z—ñ c = ");
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", c[ia]);
	}
}