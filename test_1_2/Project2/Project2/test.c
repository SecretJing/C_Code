#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a[30];
	printf("请输入喜欢的人的名字：\n");
	scanf("%s", a);
	printf("你喜欢的人的名字是：%s\n",a);
	return 0;
}