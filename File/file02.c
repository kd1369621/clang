#include<stdio.h>

main()
{
	FILE* fp;
	char str[256], equip[256];
	int i, lv, hp;
	fp = fopen("file01.txt", "r");
	for (i = 0; i < 3; i++)
	{
		fscanf(fp, "%s", str);
		printf("%s\n", str);
	}
	//fscanf(fp, "%d%d%s\n", &lv, &hp, equip);
	//printf("lv:%d hp:%d ����:%sn", lv, hp, equip);
	fgets(equip, sizeof(equip), fp);
	printf("%s\n", equip);
	fclose(fp);
}