#include <stdio.h>

main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int ia, ib;

	printf("�z��a�Ɣz��b�̉��Z���ʂ�z��c�Ɋi�[����\n");
	printf("�z�� a = ");
	for (ia = 0; ia < 10; ia++)
	{
		printf("%d ", a[ia]);
	}
	printf("\n�z�� b = ");
	for (ib = 0; ib < 10; ib++)
	{
		printf("%d ", b[ib]);
	}
	printf("\n�z�� c = ");
	for (ia = 0, ib = 0; ia < 10; ia++, ib++)
	{
		printf("%d ", a[ia] + b[ib]);
	}
}