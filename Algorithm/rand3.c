#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu;

	srand(time(0));
	kazu = rand() % 100 + 1;

	if (kazu <= 30)
	{
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I");
	}
	else
	{
		printf("’ÊíUŒ‚");
	}
}