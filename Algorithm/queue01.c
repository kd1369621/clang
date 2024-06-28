#include <stdio.h>

#define QUEUESIZE 8    //キューサイズ
int queue[QUEUESIZE];  //キュー領域用配列
int head = 0;          //キュー先頭データのポインタ(配列の添え字用)
int tail = 0;          //キュー終端データのポインタ(配列の添え字用)

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;

	do
	{
		printf("\n\n◆円キューはi、デキューはoを入力して>");
		key = getche();
		printf("\n");

		if (key == 'i')
		{
			printf("データ入力>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n※※※キューが一杯です※※※\n");
			}
			else
			{
				display();
			}
		}

		//キュー処理
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n※※※キューが空です※※※\n");
			}
			else
			{
				printf("キューからデータ(%d)を取り出しました", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;

	printf("\n＝＝＝現在のキューの内容＝＝＝\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("stack[%2dは%5d", i, queue[i]);
		if (i == head)
		{
			printf("← spが示している所(現在headは%d)", head); //確認用
		}
		if (i == tail)
		{
			printf("← tailが示している所(現在tailは%d)", tail); //確認用
		}
		printf("\n");
	}
	return;
}

int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return +1; } //キューが一杯のとき
	
	queue(tail) = d;
	tail++;

	tail = tail % QUEUESIZE;

	return 0;
}

int dequeue(int* pd)
{
	if (head == tail) { return -1; } //キューが空のとき
	
	*pd = queue(head);

	queue[head] = 0;

	head++;

	head = head % QUEUESIZE;

	return 0;
}