#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	char *p;

	c = gets(dumy);
	
	while (c != NULL)
	{
		printf("%s\n", dumy);
		p = gets(dumy);
	}
}