#include <stdio.h>

main()
{
	char ia, i;

	printf("アルファベット文字？");
	scanf("%c", &ia);

	for (i = ia; i < 'z'; i = ia++)
	{
		printf("%c ", ia);
	}
}