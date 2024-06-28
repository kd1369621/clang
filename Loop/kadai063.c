#include <stdio.h>

main()
{
	int ia;
	ia = 1;

	while (ia < 21)
	{
		if (ia < 10)
		{
			printf(" ");
		}
		printf("%d ", ia);
		if (ia % 10 == 0)
		{
			printf("\n");
		}
		ia++;
	}
}