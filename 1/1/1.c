#include<stdio.h>
#include<math.h>
//int main()
//{
//	//������������
//	int a = 1;
//	int b = 2;
//	int c = 1;
//	double det;
//	double x1;
//	double x2;
//	det = b*b - 4 * a*c;
//	if (det > 0)
//	{
//		x1 = (-b + sqrt(det)) / (2 * a);
//		x2 = (-b - sqrt(det)) / (2 * a);
//		printf("��������,x1 = %f,x2 = %f\n", x1, x2);
//	}
//	else if (det == 0)
//	{
//		x1 = (-b) / 2 * a;
//		x2 = x1;
//		printf("������ͬ��,x1 = x2 =%f\n", x1);
//	}
//	else
//	{
//		printf("�޽�\n");
//	}
//	return 0;
//}
//#include <stdio.h>
 /*int main()
 {
      char ch = 'A';
      printf("%c\n", ch);
      int age = 20;
      printf("%d\n",age);
     float dj = 5.0;
     float weight = 96.7f;
     printf("%f\n", dj);
     return 0;
 }
 int num = 20;*/
 /*int main()
 {
     int num = 10;
     printf("%d\n", num);
     return 0;
 }*/
// num2{}����ȫ�ֱ�����num1{}���Ǿֲ�����,�ֲ���������

int main()
{
	 int num1 ;
	 int num2 ;
	 scanf_s("%d%d", &num1, &num2);
	 int sum = 0;
	 sum = num1 + num2;
	 printf("sum=%d\n", sum);

	extern int hh;
	printf("%d,\n", hh);
	return 0;
}
// ���������ú���������