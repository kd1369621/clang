#include <stdio.h>

main()
{
	int ia;

	printf("0 から 100 までの整数？");
	scanf("%d", &ia);

	if (ia > -1 && ia < 101)
	{
		printf("その数値の判定結果は");
		if (ia >= 90)
		{
			printf("「5」");
		}
		if (ia >= 80 && ia <= 89)
		{
			printf("「4」");
		}
		if (ia >= 50 && ia <= 79)
		{
			printf("「3」");
		}
		if (ia >= 30 && ia <= 49)
		{
			printf("「2」");
		}
		if (ia <= 29)
		{
			printf("「1」");
		}
		printf("です");
	}
	else
	{
		printf("ERROR");
	}
}