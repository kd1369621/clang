#include <stdio.h>

main()
{
	int a[256];
	int ia, i, b;
	ia = 0;
	b = 0;

	for (i = 0; ia != -999; i++)
	{
		printf("����(-999�œ��͏I��)�H");
		scanf("%d", &ia);

		a[i] = ia;
		b++;
	}

	printf("�z�� c = ");
	for (i = 0; i < (b - 1); i++)
	{
		printf("%d ", a[i]);
	}
}