#include <stdio.h>
main()
{
	/*int num, gokei, i;
	
	printf("���́H : ");
	scanf("%d", &num);

	for (gokei = 0 , i = 0; num != -999; i++)
	{
		gokei += num;
		printf("���́H : ");
		scanf("%d", &num);
	}
	printf("���v�� %d\t���ρ� %.2f", gokei, (float)gokei / i);
	*/
	int num = 0, gokei = 0, i = 0;
	
	do
	{
		gokei += num;
		i++;
		printf("���́H : ");
		scanf("%d", &num);
	} while (num != -999);
	printf("���v�� %d\t���ρ� %.2f", gokei, (float)gokei / (i - 1));
}