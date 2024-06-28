#include <stdio.h>

main()
{
	int ia, i;
	ia = 1;
	i = 0;

	do
	{
		if (ia > 1)
		{
			printf("+");
		}
		printf("%d", ia);
		i += ia;
		ia++;
	} while (i < 301);

	printf(" = %d", i);
}