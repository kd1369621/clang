#include <stdio.h>

main()
{
	double ia, ib;

	printf("2�̎����l?");
	scanf("%lf%lf", &ia, &ib);

	printf("*** %lf �� %lf �� �l�����Z***\n", ia, ib);
	printf("�a = %f �� = %f �� = %f �� = %f", ia + ib, ia - ib, ia * ib, ia / ib);
}