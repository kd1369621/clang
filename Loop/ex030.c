#include <stdio.h>
main()
{
	int a, i;
	printf("�������� : ");
	scanf("%d", &a);
	i = 0;

	while (i <= 10)
	{
		printf("%d + %d = %d \n", a, i, a + i);
		i++;
	}
}