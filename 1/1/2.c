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

//1是字面常量 字符串，整型

//int main()
//{
//	2//const 常属性
//	const int num = 4;//num是变量，但是有常属性，
					  //所以是常变量 
//	printf("%d\n", num);
//	
	//const int n = 10;
	/*int arr[n] = { 0 };*/ //(建立数组需要常量,const也不行，
						//因为本质是变量)
	/*n = 20;
	return 0;
}*/

//3#define号定义的常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	return 0;
//}

//4枚举常量enum
//enum Sex
//{
//	male,
//	female,
//	secret
//};//{}内枚举常量不可改
//int main()
//{
//	/*printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);*/
//	enum Sex sex = male;//配置常量
//	sex = 6;//定义的变量可以改
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"有包含4个元素，'\0'，'a','c','b'--0是字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c',0};//0
//	//字符串的结束标志是一个\0的转义字符
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//数组
//	//“abc”中包含a,b,c,"\0"是字符串结束标志
//	char arr2[] = { 'a', 'b', 'c'};
//	//“/0” -- 0
//	//“a” -- 97
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%d\n", strlen(arr1));//srelen不算\0
//	printf("%d\n", strlen(arr2));//不知何时结束，无\0结束，随机值
//	
//	return 0;
//}

//转义字符
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
//	//斜杠＋数字是八进制，+x数字是十六进制
//		return 0;
//}

////条件语句
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}

////while循环的实例
//
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("我要继续努力敲代码,%d\n", line);
//	}
//	if (line>20000)
//		printf("赢取白富美\n");
//	return 0;
//}

////函数
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
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

////数组
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

//操作符

 