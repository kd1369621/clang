#include <stdio.h>

int main(void)
{
	int ia, ib, a;
	char c;

	printf("����1�H");
	scanf("%d", &ia);
	printf("����2�H");
	scanf("%d", &ib);
	scanf("%c", &c);
	printf("���Z�q�H");
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