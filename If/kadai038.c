#include <stdio.h>

main()
{
	char ia;

	printf("1文字入力？ ");
	scanf("%c", &ia);

	if (ia >= 'a' && ia <= 'z')
	{
		printf("変換結果は %c", ia - 32);
	}
}