#include <stdio.h>

main()
{
	int ia, i, b;
	i = 0;
	b = 0;

	printf("����?");
	scanf("%d", &ia);

	while (1)
	{
		b++;
		i += ia;
		printf("����?");
		scanf("%d", &ia);
		if (ia == -999) break;
	}
	
	printf("���v = %d\n���� = %.3f", i, (double)i / b);
}