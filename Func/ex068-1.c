#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	char data, data2;

	c = scanf("%c%c", &data, &data2);

	while (c != EOF) /*データの入力完了　ctrl + Z */
	{
		printf("%d", c);
		putchar('\n');
		gets(dumy); /*入力バッファのクリア*/
		c = scanf("%c%c", &data, &data2);
	}
	printf("%d\n", printf("HELLO"));
	printf("%d\n", printf("こんにちは"));
}