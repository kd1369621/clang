#include <stdio.h>

main()
{
	int ia;

	ia = 0;
	while (ia != -999)
	{
		printf("����(-999�œ��͏I��)�H");
		scanf("%d", &ia);

		if (ia != -999)
		{
			printf("8�i�� = %o\t16�i�� = %x\n", ia, ia);
		}
	}
}