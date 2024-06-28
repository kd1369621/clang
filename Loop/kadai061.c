#include <stdio.h>

main()
{
	int ia;
	ia = 1;

	do
	{
		if (ia < 10)
		{
			printf(" ");
		}
		printf("%d ", ia);
		ia++;

		if (ia % 11 == 0)
		{
			printf("\n");
		}
		
	} while (ia < 21);
}