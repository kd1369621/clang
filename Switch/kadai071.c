#include <stdio.h>

int main(void)
{
	int ia, ib, a;
	char c;

	printf("整数1？");
	scanf("%d", &ia);
	printf("整数2？");
	scanf("%d", &ib);
	scanf("%c", &c);
	printf("演算子？");
	scanf("%c", &c);
	printf("%d%c%d=", ia, c, ib);

	switch(c)
	{
		case '+':
			a = ia + ib;
			break;

		case '-':
			a = ia - ib;
			break;

		case '*':
			a = ia * ib;
			break;

		case '/':
			a = ia / ib;
			break;

		case '%':
			a = ia % ib;
			break;

		default:
			printf("ERROR");
	}
	printf("%d\n", a);

	return 0;
}