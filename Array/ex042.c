#include <stdio.h>
main()
{
	char data[6] = "Apple"; // �����l���w�肳��Ă���ꍇ�� data[]="Apple" �ł�����
	int i;

	printf("1�������\��\n");
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c\n", data[i]);
	}

	printf("\n�������\��\n");
	//printf("%s\n", &data[0]); // %s�̎��̓A�h���X���w�E
	printf("%s\n", data); // �z�񖼂��������Ɛ擪�A�h���X��\��

}