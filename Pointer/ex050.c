#include <stdio.h>
main()
{
	int a = 100;
	int* p_a;

	a = 100;
	p_a = &a;  //&a��a�̃A�h���X���w��

	printf("a=%d\n", a);
	printf("a�̃A�h���X=%p\n", &a);  //%p...�A�h���X���o��

	printf("*p_a=%d\n", *p_a);  //*p_a�ŃA�h���X��̒��g
	printf("p_a=%p\n", p_a);
}