#include <stdio.h>

main()
{
	int ia, ib;

	printf("����1�H");
	scanf("%d", &ia);
	printf("����2�H");
	scanf("%d", &ib);

	if (ia > ib)
	{
		printf("%d �̕��� %d ��� %d �傫��", ia, ib, ia - ib);
	}
	if (ia == ib)
	{
		printf("%d �� %d �͓�����", ia, ib);
	}
	if (ia < ib)
	{
		printf("%d �̕��� %d ��� %d ������", ia, ib, ib - ia);
	}
}