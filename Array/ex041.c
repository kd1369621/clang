#include <stdio.h>
main()
{
	int i;
	float g = 0.0, box[3];

	for (i = 0; i < 3; i++)
	{
		printf("実数を入力 : ");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++)
	{
		g += box[i];
	}
	printf("合計%.2f \n", g);
	printf("平均%.2f \n", g / 3.0);
}