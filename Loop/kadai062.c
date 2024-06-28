#include <stdio.h>

main()
{
	int ia;
	ia = 20;

	do
	{
		if (ia < 10)
		{
			printf(" ");
		}
		printf("%d ", ia);
		if (ia % 11 == 0)
		{
			printf("\n");
		}
		ia--;
	} while (ia > 0);
}
