#include <stdio.h>

main()
{
	int ia;

	ia = 0;
	while (ia != -1)
	{
		printf("�����R�[�h(-1�ŏI��)?");
		scanf("%d", &ia);
		if (ia != -1)
		{
			printf("%c\n", ia);
		}
	}
}