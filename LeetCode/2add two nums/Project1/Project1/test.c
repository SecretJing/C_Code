#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LNode {				//链表结点结构体定义
	int val;
	struct LNode* next;
}LNode, * Linklist;

void printL(Linklist L) {
	LNode* p;
	p = L;
	printf("{");
	while (p != NULL) {
		printf("%d", p->val);
		if (p->next != NULL)
			printf(",");
		p = p->next;
	}
	printf("}\n");
}

Linklist creatL(int n) {
	LNode* p,*tail;
	Linklist L;
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL) return 0;
	L->next = NULL;
	L->val = n % 10;
	tail = L;
	for (int i = 10; i < n; i = i * 10) {
		p = (LNode*)malloc(sizeof(LNode));
		if (L == NULL) return 0;
		p->next = NULL;
		p->val = (n / i) % 10;
		tail->next = p;
		tail = p;
	}
	return L;
}

Linklist addL(Linklist L1, Linklist L2) {
	Linklist L3;
	int signal = 0;
	LNode* p, *q, *pq, *tail;
	p = L1;
	q = L2;
	pq = (LNode*)malloc(sizeof(LNode));
	if (pq == NULL) {
		printf("分配失败");
		return 0;
	}
	pq->next = NULL;
	pq->val = (p->val + q->val) % 10;
	signal = (p->val + q->val) / 10;
	L3 = pq;
	tail = pq;
	p = p->next;
	q = q->next;
	while (p != NULL && q != NULL) {
		pq = (LNode*)malloc(sizeof(LNode));
		if (pq == NULL) return 0;
		if (signal == 0) {
			pq->val = (p->val + q->val) % 10;
			signal = (p->val + q->val) / 10;
			p = p->next;
			q = q->next;
		}
		else {
			pq->val = (p->val + q->val + 1) % 10;
			signal = (p->val + q->val + 1) / 10;
			p = p->next;
			q = q->next;
		}
		pq->next = NULL;
		tail->next = pq;
		tail = pq;
	}
	while (p != NULL) {
		pq = (LNode*)malloc(sizeof(LNode));
		if (signal == 0) {
			*pq = *p;
			p = p->next;
		}
		else {
			pq->val = (p->val + 1) % 10;
			signal = (p->val + 1) / 10;
			p = p->next;
		}
		pq->next = NULL;
		tail->next = pq;
		tail = pq;
	}
	while (q != NULL) {
		pq = (LNode*)malloc(sizeof(LNode));
		if (signal == 0) {
			*pq = *q;
			q = q->next;
		}
		else {
			pq->val = (q->val + 1) % 10;
			signal = (q->val + 1) / 10;
			q = q->next;
		}
		pq->next = NULL;
		tail->next = pq;
		tail = pq;
	}
	if (signal != 0) {
		pq = (LNode*)malloc(sizeof(LNode));
		pq->next = NULL;
		pq->val = signal;
		tail->next = pq;
		tail = pq;
	}
	return L3;
}

int main() {
	Linklist L1,L2,L3;
	int n1,n2;
	L1 = NULL;
	L2 = NULL;
	L3 = NULL;
	printf("请输入第一个多位数：\n");
	scanf("%d",&n1);
	L1 = creatL(n1);
	printf("请输入第二个多位数：\n");
	scanf("%d", &n2);
	L2 = creatL(n2);
	L3 = addL(L1,L2);
	printL(L1);
	printL(L2);
	printL(L3);
	return 0;
}

