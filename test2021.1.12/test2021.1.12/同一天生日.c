//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	srand((unsigned)time(NULL));
//	int Stu[366]; int NofS;
//	for (NofS = 10; NofS <= 80; NofS++)//从十个同学到80个同学
//	{
//		int t, count = 0;
//		for (t = 1; t <= 100000; t++)//计算t次
//		{
//			int x;
//			for (x = 1; x <= NofS; x++)
//			{
//				Stu[x] = rand() % 365 + 1;//第x位同学的生日为..用365中一天代替
//			}
//			if (HSB(Stu, NofS) == 1)count++;
//		}
//		printf("\nNofS = %d  p=%lf", NofS, (double)count / t);
//	}
//	return 0;
//}
//int  HSB(int Stu[], int n)//找生日相同的人时返回值1
//{
//	int i, j;
//	for (i = 1; i <= n - 1; i++)
//		for (j = i + 1; j <= n; j++)
//			if (Stu[i] == Stu[j])
//				return 1;
//}