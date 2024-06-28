#include <stdio.h>

void Str_Cat(char *s1, char *s2);
imain()
{
	char a[256], b[256];

	printf("”z—ña : ");
	gets(a);  //scanf("%s", &a);
	printf("”z—ñb : ");
	gets(b);  //scanf("%s", &b);

	Str_Cat(a, b);
	printf("”z—ña : %s\n", a);
}
void Str_Cat(char *s1, char *s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);

	for (j = 0; *(s2 + j) != '\0'; i++, j++);
}