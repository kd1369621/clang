#include <stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data *p);

main()
{
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��", 50 };
	display1(a); //�l�n��
	display2(syohin); //�l�n��
	display3(&syohin); //�A�h���X(&)�n��

	display2(syohin);
}

void display1(int a)
{
	printf("a = %d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.nname = %s  syohin.tanka = %d\n", syohin.name, syohin.tanka);
}

void display3(struct syohin_data* p)
{
	printf("p->nname = %s  p->tanka = %d\n", p->name, p->tanka);

	//�A�h���X���󂯎���Ă���̂�
	//�����������\
	strcpy (p->name,"�l�グ�P�V�S��"); //�͋[���ύX����Ƃ���strcpy�ł��
	p->tanka = 100; //�P����100�ɂ��Ă݂�
}