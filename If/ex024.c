#include <stdio.h>
main()
{
	char m;
	printf("��������� : ");
	scanf("%c", &m);

	if (m < 0x41) //'A',65�ł�OK
	{
		printf("���̑��̕����ł� \n");
	}
	else
	{
		if (m <= 0x5A) //'Z'
		{
			printf("�啶���ł� \n");
		}
		else
		{
			printf("���̑��̕����ł� \n");
		}
	}
}