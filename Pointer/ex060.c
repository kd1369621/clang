#include<stdio.h>
main()
{
	char data[] = 'Language';
	char* p_data, ch;
	int i = 0;
	p_data = data;

	printf("data[]=%s\n", p_data);
	printf("���������́H");
	scanf("%c", &ch);
	printf("�������ʂ́A", );
	while (*(p_data + i))
	{
		if (ch == *(p_data++))
		{
			printf("%d", i + 1);
		}
		i++;
		else {
			printf("������܂���\n");
		}
	}
	printf("�����ڂł�\n");
}