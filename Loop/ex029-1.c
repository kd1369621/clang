#include <stdio.h>
main()
{
	int a;
	printf("�������� : ");
	scanf("%d", &a);

	while (a > 0)
	{
		printf("*");
		a --;
	}
}