#include <stdio.h>
main()
{
	int num, i = 0;

	printf("����? ");
	scanf("%d", &num);

	do
	{
		printf("***** \n");
		num--; // num =- 1 ; or num = num - 1;
	} while (num > 0);
}