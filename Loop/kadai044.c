#include <stdio.h>

main()
{
	int ia;

	ia = 0;
	while (ia != -999)
	{
		printf("整数(-999で入力終了)？");
		scanf("%d", &ia);

		if (ia != -999)
		{
			printf("8進数 = %o\t16進数 = %x\n", ia, ia);
		}
	}
}