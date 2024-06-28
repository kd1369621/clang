#include <stdio.h>

main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int ia, ib;

	printf("”z—ña‚Æ”z—ñb‚Ì‰ÁŽZŒ‹‰Ê‚ð”z—ñc‚ÉŠi”[‚·‚é\n");
	printf("”z—ñ a = ");
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", a[ia]);
	}
	printf("\n”z—ñ b = ");
	for (ib = 0; ib < 10; ib++)
	{
		printf("%d ", b[ib]);
	}
	printf("\n”z—ñ c = ");
	for (ia = 0, ib = 0; ia < 10; ia++, ib++)
	{
		printf("%d ", a[ia] + b[ib]);
	}
}