#include<stdio.h>
main()
{
	char data[] = 'Language';
	char* p_data, ch;
	int i = 0;
	p_data = data;

	printf("data[]=%s\n", p_data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &ch);
	printf("ŒŸõŒ‹‰Ê‚ÍA", );
	while (*(p_data + i))
	{
		if (ch == *(p_data++))
		{
			printf("%d", i + 1);
		}
		i++;
		else {
			printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ\n");
		}
	}
	printf("•¶š–Ú‚Å‚·\n");
}