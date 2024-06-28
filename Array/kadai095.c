#include <stdio.h>

main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int ia, ib, g;
	ib = 0;
	g = 0;

	printf("配列 a = ");
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", a[ia]);
		g += a[ia];
		ib++;
	}
	printf("\n合計 = %d\t平均 = %d\n", g, g / ib);
	printf("配列 b = ");
	ib = 0;
	g = 0;
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", b[ia]);
		g += b[ia];
		ib++;
	}
	printf("\n合計 = %d\t平均 = %d", g, g / ib);
}