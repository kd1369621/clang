#include <stdio.h>

main()
{
	int ia;

	ia = 0;
	while (ia != -1)
	{
		printf("文字コード(-1で終了)?");
		scanf("%d", &ia);
		if (ia != -1)
		{
			printf("%c\n", ia);
		}
	}
}