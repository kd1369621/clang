#include <stdio.h>
main()
{
	int tuki;
	printf("������� : ");
	scanf("%d", &tuki);

	if (tuki == 2)
	{
		printf("�ŏI����28���ł�");
	}
	else
	{
		if (tuki == 4 || tuki == 6 || tuki ==9 || tuki ==11)
		{
			printf("�ŏI����30���ł�");
		}
		else
		{
			printf("�ŏI����31���ł�");
		}
	}
}