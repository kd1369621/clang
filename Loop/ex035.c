#include <stdio.h>
main()
{
	int num, sun;
	sun = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä : ");
		scanf("%d", &num);

		if (num == -999)break;
		sun += num;
	}
	printf("‡Œv= %d \n", sun);
}