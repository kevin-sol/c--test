//#include<stdio.h>
//int count = 1;
//void move(char a, char c)
//{
//	printf("\n%c->%c   %d", a, c,count);
//	count++;
//}
//void hnt(int n, char a, char b, char c)
//{
//	if (n == 1)move(a, c);
//	else
//	{
//		hnt(n - 1, a, c, b);
//		move(a, c);
//		hnt(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	hnt(8, 'a', 'b', 'c');
//	return 0;
//}


//#include<stdio.h>
//#include<time.h>
//int trail(int change)
//{
//	int  book[3] = { 0,0,0 };
//	int r = rand() % 3;
//	book[r] = 1;
//	//playerѡ��
//	int hand;
//	hand = rand() % 3;
//	//�������ų�һ����
//	int open = rand() % 3;
//	while (open == hand || book[open] == 1)
//		open = rand() % 3;
//	//player�����Ƿ���
//	if (change == 1)
//	{
//		hand = 3 - open - hand;
//	}
//	//�����Ƿ�Ӯ
//	if (book[hand] == 1)return 1;
//	else 
//		return 0;
//}
//int main()
//{
//	srand((unsigned) time(NULL));
//	int changewin = 0, nochange = 0, i;
//	for (i = 1; i <= 10000; i++)
//	{
//		if (trail(1) == 1)changewin++;
//	}
//	for(i=1;i<=10000;i++)
//	{
//		if (trail(0) == 1)nochange++;
//	}
//	printf("%d    %d\n", nochange, changewin);
//	return 0;
//}