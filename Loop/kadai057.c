#include <stdio.h>

main()
{
	char ia, i;

	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &ia);

	for (i = (ia - 32) + 1; i <= 'Z'; i++)
	{
		printf("%c ", i);
	}
}