#include <stdio.h>
main()
{
	int i;
	float g = 0.0, box[3];

	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í : ");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++)
	{
		g += box[i];
	}
	printf("‡Œv%.2f \n", g);
	printf("•½‹Ï%.2f \n", g / 3.0);
}