#include <stdio.h>
main()
{
	int t;

	printf("�������� : ");
	scanf("%d", &t);

	if (t % 4 == 0 && t % 100 != 0 || t % 400 == 0)
	{
		printf("���邤�N�ł� \n");
	}
	else {
		printf("���N�ł� \n");
	}
}