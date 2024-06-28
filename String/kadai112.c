#include <stdio.h>

main()
{
	char data1[] = "abcde";
	char data2[10];
	int ia;

	for (ia = 0; data1[ia] <= '\0'; ia++)
	{
		data2[ia] = data1[ia];
	}
	for (ia = 0; ia != '\0'; ia++)
	{
		printf("%c", data2[ia]);
	}
}