#include <stdio.h>

main()
{
	int ia;

	printf("整数？");
	scanf("%d", &ia);

	if (ia > 0)
	{
		printf("入力値は「プラス」です\n");
	}
	if (ia < 0)
	{
		printf("入力値は「マイナス」です\n");
	}
	if (ia == 0)
	{
		printf("入力値は「０」です\n");
	}
}