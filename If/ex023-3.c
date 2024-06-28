#include <stdio.h>
main()
{
	int e, s1, s2;
	
	printf("‰‰Zq‚ğ“ü—Í : ");
	scanf("%d", &e);

	printf("2‚Â‚Ì®”‚ğ“ü—Í : ");
	scanf("%d%d", &s1, &s2);

	if (e == 1)
	{
		printf("%d \n", s1 + s2);
	}
	else
	{
		if (e == 2) 
		{
			printf("%d \n", s1 - s2);
		}
		else 
		{
			if (e == 3) 
			{
				printf("%d \n", s1 * s2);
			}
			else 
			{
				if (e == 4) {
					printf("%d \n", s1 / s2);
				}
				else {
					printf("1`4‚Ì‚¢‚¸‚ê‚©‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢")
				}
			}
		}
	}
}