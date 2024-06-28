#include <stdio.h>
main()
{
	int data, sum, cnt;
	int ret;

	printf("®” : ");
	ret = scanf("%d", &data);

	sum = 0;
	cnt = 0;

	while (ret != EOF)
	{
		//ŒvZ
		sum += data;
		cnt++;

		//“ü—Í
		printf("®” : ");
		ret = scanf("%d", &data);
	}

	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum / cnt);
}