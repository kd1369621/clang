#include <stdio.h>

main()
{
	int ia;

	printf("0 ���� 100 �܂ł̐����H");
	scanf("%d", &ia);

	if (ia > -1 && ia < 101)
	{
		printf("���̐��l�̔��茋�ʂ�");
		if (ia >= 90)
		{
			printf("�u5�v");
		}
		if (ia >= 80 && ia <= 89)
		{
			printf("�u4�v");
		}
		if (ia >= 50 && ia <= 79)
		{
			printf("�u3�v");
		}
		if (ia >= 30 && ia <= 49)
		{
			printf("�u2�v");
		}
		if (ia <= 29)
		{
			printf("�u1�v");
		}
		printf("�ł�");
	}
	else
	{
		printf("ERROR");
	}
}