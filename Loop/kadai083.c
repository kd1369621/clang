#include <stdio.h>

main()
{
	int i;
	
	for (i = 1; i > 0; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		if (i > 20)
		{
			break;
		}
		printf("%d ", i);
	}
}