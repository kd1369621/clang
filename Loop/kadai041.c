#include <stdio.h>
main()
{
	int num, gokei , i;
	gokei = 0;
	i = 0;
	printf("®”?");
	scanf("%d", &num);
	

	while (num != -999)
	{
		gokei += num;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &num);
		i++;
		
	}

	printf("‡Œv = %d \n", gokei);
	printf("•½‹Ï = %d \n", gokei / i);
}