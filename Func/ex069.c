#include <stdio.h>
main()
{
	int data, sum, cnt;
	int ret;

	printf("���� : ");
	ret = scanf("%d", &data);

	sum = 0;
	cnt = 0;

	while (ret != EOF)
	{
		//�v�Z
		sum += data;
		cnt++;

		//����
		printf("���� : ");
		ret = scanf("%d", &data);
	}

	printf("���v=%d ����=%.2f\n", sum, (float)sum / cnt);
}