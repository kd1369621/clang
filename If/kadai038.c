#include <stdio.h>

main()
{
	char ia;

	printf("1�������́H ");
	scanf("%c", &ia);

	if (ia >= 'a' && ia <= 'z')
	{
		printf("�ϊ����ʂ� %c", ia - 32);
	}
}