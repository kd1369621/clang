#include <stdio.h>
main()
{
	int num, sun;
	sun = 0;
	while (1)
	{
		printf("�������� : ");
		scanf("%d", &num);

		if (num == -999)break;
		sun += num;
	}
	printf("���v= %d \n", sun);
}