#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
//�����ƽ��㷨
int* twosum(int* nums, int numsSize, int target, int* returnSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (target == nums[i] + nums[j])
			{
				int* ret = malloc(sizeof(int) * 2);
				ret[0] = i;
				ret[1] = j;
				*returnSize = 2;
				return ret;
			}
		}
	}
	*returnSize = 0;
	return NULL;
}

int main()
{
	int* nums = NULL, * ret;
	int returnSize;
	int numsSize;								//������Ԫ�ظ���
	int target;									//Ŀ��ֵ
	printf("��������������Ԫ�ظ�����\n");
	scanf("%d", &numsSize);
	nums = (int*)malloc(sizeof(int) * numsSize);		//����ռ�
	printf("���������ݣ�\n");
	for (int i = 0; i < numsSize; i++)					//ѭ����������
		{
			scanf("%d", &nums[i]);
		}
	printf("������Ŀ��ֵ��\n");
	scanf("%d", &target);
	ret = twosum(nums, numsSize, target, &returnSize);
	if (ret)
		{
			printf("(%d,%d)",ret[0], ret[1]);
			return 1;
		}
	else return 0;
}