#include <stdio.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile pdat[5] = { {"a",{2000,10,24},"A"},
							   {"b",{2005,1,19},"A"},
							   {"c",{2000,12,04},"B"},
							   {"d",{2000,2,10},"AB"},
							   {"e",{2000,6,10},"O"}, };
	struct profile* p = pdat;
	int i;

	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)
		{
			printf("%sーー", p->name);
			printf(" % d年 % 02d月%02d日生", p->birth.nen, p->birth.tuki, p->birth.hi);
			printf("血液型ーー\n", p->blood);
		}
		p++;
	}
	
}