#include <stdio.h>

main()
{
	double ia, ib;

	printf("2�̎����l�H");
	scanf("%lf%lf", &ia, &ib);

	if (ia < ib)
	{
		printf("�傫���ق��� = %f", ib);
	}
	else
	{
		printf("�傫���ق��� = %f", ia);
	}
}