#include <stdio.h>

int add(int d1, int d2, int d3);

main()
{
	int d1, d2, d3, g;
	float h; //����

	printf("������3���� : ");
	scanf("%d%d%d", &d1, &d2, &d3);

	g = gokei(d1, d2, d3);
	h = heikin(d1, d2, d3);

	// ���ʕ\��
	printf("���v��%d�A���ς�%.2f", g, h);
}

//�֐���`
int gokei(int d1, int d2, int d3)
{
	int g2;
	g2 = d1 + d2 + d3;
	return g2;
}

int heikin(int d1, int d2, int d3)
{
	float h2;
	h2 = (d1 + d2 + d3) / 3.0;
	return h2;
}