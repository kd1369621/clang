#include <stdio.h>

main()
{
	int ia, i, b;
	i = 0;
	b = 0;

	printf("整数(-999で終了)？");
	scanf("%d", &ia);
	do
	{
		i += ia;
		printf("整数(-999で終了)？");
		scanf("%d", &ia);
		b++;
	} while (ia != -999);

	printf("合計 = %d\n平均 = %f", i, (double)i / b);
}