#include <stdio.h>
main()
{
	char data[6] = "Apple"; // 初期値が指定されている場合は data[]="Apple" でもいい
	int i;

	printf("1文字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c\n", data[i]);
	}

	printf("\n文字列を表示\n");
	//printf("%s\n", &data[0]); // %sの時はアドレスを指摘
	printf("%s\n", data); // 配列名だけ書くと先頭アドレスを表す

}