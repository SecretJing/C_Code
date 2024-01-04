#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a,b,sum;
	printf("请输入第一个数：\n");
	scanf("%d",&a);
	printf("请输入第二个数：\n");
	scanf("%d",&b);
	sum = a + b;
	printf("%d + %d = %d",a,b,sum);
	return 0;
}