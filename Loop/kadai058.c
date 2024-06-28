#include <stdio.h>

main()
{
	int i;
	char ia;

	for (i = 32; i <= 126; i++)
	{
		ia = i;

		printf("%x %c ", i, ia);
	}
}