#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//1�����泣�� �ַ���������

//int main()
//{
//	2//const ������
//	const int num = 4;//num�Ǳ����������г����ԣ�
					  //�����ǳ����� 
//	printf("%d\n", num);
//	
	//const int n = 10;
	/*int arr[n] = { 0 };*/ //(����������Ҫ����,constҲ���У�
						//��Ϊ�����Ǳ���)
	/*n = 20;
	return 0;
}*/

//3#define�Ŷ���ĳ���
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	return 0;
//}

//4ö�ٳ���enum
//enum Sex
//{
//	male,
//	female,
//	secret
//};//{}��ö�ٳ������ɸ�
//int main()
//{
//	/*printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);*/
//	enum Sex sex = male;//���ó���
//	sex = 6;//����ı������Ը�
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"�а���4��Ԫ�أ�'\0'��'a','c','b'--0���ַ����Ľ�����־
//	char arr2[] = { 'a', 'b', 'c',0};//0
//	//�ַ����Ľ�����־��һ��\0��ת���ַ�
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//����
//	//��abc���а���a,b,c,"\0"���ַ���������־
//	char arr2[] = { 'a', 'b', 'c'};
//	//��/0�� -- 0
//	//��a�� -- 97
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%d\n", strlen(arr1));//srelen����\0
//	printf("%d\n", strlen(arr2));//��֪��ʱ��������\0���������ֵ
//	
//	return 0;
//}

//ת���ַ�
//int main()
//{
//	printf("c:\\test\\");
//	printf
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//б�ܣ������ǰ˽��ƣ�+x������ʮ������
//		return 0;
//}

////�������
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//	return 0;
//}

////whileѭ����ʵ��
//
//int main()
//{
//	printf("�������\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("��Ҫ����Ŭ���ô���,%d\n", line);
//	}
//	if (line>20000)
//		printf("Ӯȡ�׸���\n");
//	return 0;
//}

////����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

////����
//int main()
//{
//	int t = 0;
//	int cao[10] = {1,2,3,4,5,6,7,8,9,0};
//	while (t < 10)
//	{
//		printf("%d ", cao[t]);
//		t++;
//	}
//	printf("%d\n", cao[1]);
//	return 0;
//}

//������

 