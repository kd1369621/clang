//
//�����o�[�W����

#include <stdio.h>
main()
{
	char m;
	printf("��������� : ");
	scanf("%c", &m);

	if (m >= 0x41 && m <= 0x5A)
	{
		printf("�啶���ł� \n");
	}
	else
	{
		printf("���̑��̕����ł� \n");
	}
}