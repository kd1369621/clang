#include <stdio.h>
main()
{
	int s, h, m;
	printf("秒数を入力 : ");
	scanf("%d", &s);

	if (s < 0) {
		printf("プラスの値を入れてください \n");
	}
	else {
		if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d時%d分%d秒", h, m, s);
		}
		else {
			printf("入力エラー");
		}
	}
	
}