#include <stdio.h>
main()
{
	int a = 100;
	int* p_a;

	a = 100;
	p_a = &a;  //&aでaのアドレスを指す

	printf("a=%d\n", a);
	printf("aのアドレス=%p\n", &a);  //%p...アドレスを出力

	printf("*p_a=%d\n", *p_a);  //*p_aでアドレス先の中身
	printf("p_a=%p\n", p_a);
}