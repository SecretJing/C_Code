#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int res;
	res = jiecheng();
	printf("%d\n",res);
}

int jiecheng() {
	printf("请输入要求阶乘的数字：\n");
	int n;
	scanf("%d",&n);
	int res = 1;
	for (int i = 1; i <= n; i ++) {
		res = res * i;
	}
	return res;
}