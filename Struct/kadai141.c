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
	strcpy(game.cors,"ゲームソフトⅠコース");
	strcpy(game.kyoka,"C言語");
	game.tani = 8;

	printf("コース名 ; %s\n教科名 : %s\n単位数 : %d", game.cors, game.kyoka, game.tani);
}