#include <stdio.h>

//関数プロトタイプ
int  add(int a, int b);

main() {
	int a, b, kotae;
	printf("整数を2つ入力 : ");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);       //関数addの呼び出し
	printf("合計は %d です\n", kotae);
}

//関数定義
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}