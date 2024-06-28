#include <stdio.h>
struct game_data
{
	char cors[20];
	int tani;
	char kyoka[20];
};

main()
{
	struct game_data game;
	struct game_data* p;
	p = &game;

	printf("コース名 : ");
	scanf("%s", p->name);
	printf("教科名 : ");
	scanf("%s", p->kyoka);
	printf("単位数 : ");
	scanf("%d", &p->tani);

	printf("コース名 ; %s\n教科名 : %s\n単位数 : %d", p->cors, p->kyoka, p->tani);
}