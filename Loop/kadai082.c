#include <stdio.h>

main()
{
	int ia, i, b;
	i = 0;
	b = 0;

	printf("®”?");
	scanf("%d", &ia);
	b++;
	i += ia;
	while (1)
	{
		
		printf("®”?");
		scanf("%d", &ia);
		if (ia == -999)
		{
			break;
		}
		if (ia < 0)
		{
			continue;
		}
		i += ia;
		b++;
	}
	printf("‡Œv = %d\n•½‹Ï = %.3f", i, (double)i / b);
}