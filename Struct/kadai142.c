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

	printf("�R�[�X�� : ");
	scanf("%s", p->name);
	printf("���Ȗ� : ");
	scanf("%s", p->kyoka);
	printf("�P�ʐ� : ");
	scanf("%d", &p->tani);

	printf("�R�[�X�� ; %s\n���Ȗ� : %s\n�P�ʐ� : %d", p->cors, p->kyoka, p->tani);
}