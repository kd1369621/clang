#include <stdio.h>
main()
{
	int t;

	printf("西暦を入力 : ");
	scanf("%d", &t);

	if (t % 4 == 0 && t % 100 != 0 || t % 400 == 0)
	{
		printf("うるう年です \n");
	}
	else {
		printf("平年です \n");
	}
}