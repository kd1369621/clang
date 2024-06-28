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
	else
	{
		printf("その文字は「大文字です」です");
	}
}