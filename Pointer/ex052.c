#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a;

	printf("実行前 : a = %d\tb = %d", a, b);

	p_a = &a;
	a = b;
	b = p_a;

	printf("実行後 : ")
}