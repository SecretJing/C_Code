#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("�������������֣�\n");
	scanf("%d%d",&a,&b);
	c = max(a,b);
	printf("�ϴ�ֵΪ��%d\n",c);
	return 0;
}

int max(int a,int b)
{
	if (a > b)
		return a;
	else
		return b;
}