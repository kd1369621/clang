#include <stdio.h>

main()
{
	int i, gokei;
	i = 1;
	gokei = 0;

	while (gokei < 301)
	{
		gokei += i;
		printf("%d", i);
		i++;
		if (gokei < 301)
		{
			printf(" + ");
		}
	}
	printf(" = %d", gokei);
}