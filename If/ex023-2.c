#include <stdio.h>
main()
{
	int t;

	printf("¼—ï‚ğ“ü—Í : ");
	scanf("%d", &t);

	if (t % 4 == 0 && t % 100 != 0 || t % 400 == 0)
	{
		printf("‚¤‚é‚¤”N‚Å‚· \n");
	}
	else {
		printf("•½”N‚Å‚· \n");
	}
}