#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a[3], max = 0;
	printf("请输入三个数字：\n");
	for (int i = 0; i < 3; i++) 
	{
		scanf("%d",&a[i]);
		if (a[i] > max)
			max = a[i];
	}
	printf("其中最大的数是：%d\n",max);
	return 0;
}