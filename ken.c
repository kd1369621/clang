#include <stdio.h>
struct data_pl
{
	char name[20];
	int hp;
};

main()
{
	struct data_pl pl = { {'player1',50},{'player2',40} };
	struct data_pl* p;
	p = &pl;

	printf("-�퓬�J�n-");

	do
	{
		printf("%s : hp(%d)   %s : hp(%d)", p[0]->name, p[0]->hp, p[1]->name, p[1]->hp);

		printf("%s�̃^�[��", p -> name);
	} while (*p[0][1] > 0 && *p[1][1] > 0);

}