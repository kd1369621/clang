#include <stdio.h>

main()
{
	double ia, ib;

	printf("2つの実数値？");
	scanf("%lf%lf", &ia, &ib);

	if (ia < ib)
	{
		printf("大きいほうは = %f", ib);
	}
	else
	{
		printf("大きいほうは = %f", ia);
	}
}