#include <stdio.h>
main()
{
	char moji;
	moji = 'A';
	printf("moji : %c \n小文字に変換 : %c", moji, moji + 32);
}
/*または

#include <stdio.h>
main()
{
	char moji;
	moji = 'A';
	printf("moji : %c \n");
	printf("小文字に変換 : %c \n", moji + 32);
}

*/