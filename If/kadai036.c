#include <stdio.h>

main()
{
	int ia, ib;

	printf("整数1？");
	scanf("%d", &ia);
	printf("整数2？");
	scanf("%d", &ib);

	if (ia > ib)
	{
		printf("%d の方が %d より %d 大きい", ia, ib, ia - ib);
	}
	if (ia == ib)
	{
		printf("%d と %d は等しい", ia, ib);
	}
	if (ia < ib)
	{
		printf("%d の方が %d より %d 小さい", ia, ib, ib - ia);
	}
}