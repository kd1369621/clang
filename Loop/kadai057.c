#include <stdio.h>

main()
{
	char ia, i;

	printf("アルファベット小文字？");
	scanf("%c", &ia);

	for (i = (ia - 32) + 1; i <= 'Z'; i++)
	{
		printf("%c ", i);
	}
}