
#include <stdio.h>
main()
{
	int a, b;
	printf("整数？");
	scanf("%d", &a);

	b = a % 2;

	if (b == 1) {
		printf("その数は「奇数」です");
	}
	else {
		printf("その数は「偶数」です");
	}
}