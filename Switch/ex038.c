#include <stdio.h>
main()
{
	int s;

	printf("整数を入力 : ");
	scanf("%d", &s);

	switch (s / 10)
	{
	case 1:
		printf("10点台");
		break;

	case 2:
		printf("20点台");
		break;

	case 3:
		printf("30点台");
		break;

	case 4:
		printf("40点台");
		break;

	default :
		printf("エラー");
	}
}