#include <stdio.h>

main()
{
	int max_score = 0, score = 0;
	char max_name[20], ch, mane[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("�ō����_ ���O : %s �X�R�A : %d", max_name, max_score);

	printf("�v���C�C���[�̖��O : ");
	scanf("%s", name)
	while (1)
	{
		printf("���݂̃X�R�A : %d (Enter�ŃX�R�A+1,e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}

		//�X�R�A���Z
		score++;
	}

	if (score > max_score)
	{
		//�t�@�C��score.txt�ւ̏�������
		fp = fopen("acore.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}