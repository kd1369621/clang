#include <stdio.h>
main()
{
	char data[] = "orange";
	int i;

	for (i = 0; data[i] != '\0'; i++){}

	printf("������ : %s\n", &data[0]);

	printf("��������%d���� \n", i);
}