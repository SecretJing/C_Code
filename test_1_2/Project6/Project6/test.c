#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a[3], max = 0;
	printf("�������������֣�\n");
	for (int i = 0; i < 3; i++) 
	{
		scanf("%d",&a[i]);
		if (a[i] > max)
			max = a[i];
	}
	printf("�����������ǣ�%d\n",max);
	return 0;
}