#include <stdio.h>
main()
{
	int y;
	printf("����������� : ");
	scanf("%d", &y);

	switch (y / 10000)
	{
	case 1:
		printf("1���ۋ�����");
		break;

	case 2:
		printf("2���ۋ�����");
		break;

	default:
		printf("���ʂ���");
	}
}