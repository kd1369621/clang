#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a;

	printf("���s�O : a = %d\tb = %d", a, b);

	p_a = &a;
	a = b;
	b = p_a;

	printf("���s�� : ")
}