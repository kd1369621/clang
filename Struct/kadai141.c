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
	strcpy(game.cors,"�Q�[���\�t�g�T�R�[�X");
	strcpy(game.kyoka,"C����");
	game.tani = 8;

	printf("�R�[�X�� ; %s\n���Ȗ� : %s\n�P�ʐ� : %d", game.cors, game.kyoka, game.tani);
}