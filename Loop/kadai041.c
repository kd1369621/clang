#include <stdio.h>
main()
{
	int num, gokei , i;
	gokei = 0;
	i = 0;
	printf("����?");
	scanf("%d", &num);
	

	while (num != -999)
	{
		gokei += num;
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		i++;
		
	}

	printf("���v = %d \n", gokei);
	printf("���� = %d \n", gokei / i);
}