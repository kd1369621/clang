#include <stdio.h>
main()
{
	int e, s1, s2;
	
	printf("演算子を入力 : ");
	scanf("%d", &e);

	printf("2つの整数を入力 : ");
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
					printf("1〜4のいずれかを入力して下さい")
				}
			}
		}
	}
}