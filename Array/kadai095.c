#include <stdio.h>

main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int ia, ib, g;
	ib = 0;
	g = 0;

	printf("�z�� a = ");
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", a[ia]);
		g += a[ia];
		ib++;
	}
	printf("\n���v = %d\t���� = %d\n", g, g / ib);
	printf("�z�� b = ");
	ib = 0;
	g = 0;
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", b[ia]);
		g += b[ia];
		ib++;
	}
	printf("\n���v = %d\t���� = %d", g, g / ib);
}