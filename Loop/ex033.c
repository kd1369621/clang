#include <stdio.h>
main()
{
	/*int num, gokei, i;
	
	printf("数は？ : ");
	scanf("%d", &num);

	for (gokei = 0 , i = 0; num != -999; i++)
	{
		gokei += num;
		printf("数は？ : ");
		scanf("%d", &num);
	}
	printf("合計＝ %d\t平均＝ %.2f", gokei, (float)gokei / i);
	*/
	int num = 0, gokei = 0, i = 0;
	
	do
	{
		gokei += num;
		i++;
		printf("数は？ : ");
		scanf("%d", &num);
	} while (num != -999);
	printf("合計＝ %d\t平均＝ %.2f", gokei, (float)gokei / (i - 1));
}