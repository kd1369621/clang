#include <stdio.h>

main()
{
	int ia, i, b;
	i = 0;
	b = 0;

	printf("����(-999�ŏI��)�H");
	scanf("%d", &ia);
	do
	{
		i += ia;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &ia);
		b++;
	} while (ia != -999);

	printf("���v = %d\n���� = %f", i, (double)i / b);
}