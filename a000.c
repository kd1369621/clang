#include <stdio.h>
main()
{
	int y;
	printf("Š‹à‚ğ“ü—Í : ");
	scanf("%d", &y);

	switch (y / 10000)
	{
	case 1:
		printf("1–œ‰Û‹à‚·‚é");
		break;

	case 2:
		printf("2–œ‰Û‹à‚·‚é");
		break;

	default:
		printf("Š®“Ê‚·‚é");
	}
}