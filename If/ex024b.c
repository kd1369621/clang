//
//改造バージョン

#include <stdio.h>
main()
{
	char m;
	printf("文字を入力 : ");
	scanf("%c", &m);

	if (m >= 0x41 && m <= 0x5A)
	{
		printf("大文字です \n");
	}
	else
	{
		printf("その他の文字です \n");
	}
}