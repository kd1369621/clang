#include <stdio.h>
main()
{
	int num, i;
	
	printf("数を入れて : ");
	scanf("%d", &num);

	for (i = 1; i <= 5; i++)
	{
		printf("%d \n", num * i);
	}
}