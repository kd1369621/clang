#include <stdio.h>

main()
{
	char ia;

	printf("アルファベット？ ");
	scanf("%c", &ia);

	if (ia <= 'z' && ia >= 'a')
	{
		printf("その文字は「小文字」です");
	}
	if (ia <= 'Z' && ia >= 'A')
	{
		printf("その文字は「大文字です」です");
	}
	else
	{
		printf("ERROR");
	}
}