#include<stdlib.h>
#include<stdio.h>

typedef struct LNode{
	int data;
	LNode *next;
}LNode,*LinkList;


bool ListInsert(LinkList &L, int i,int e){
	LNode *p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p == NULL) {
		return false;
	}

	LNode *s = (LNode *)malloc(sizeof(LNode));
	s ->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

LinkList List_HeadInsert(LinkList &L) {
	LNode *s;
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}
int main() {
	/*int e = 0;
	scanf("%d", &e);
	LNode *first = (LNode *)malloc(sizeof(LNode));
	first->data = 1;
	LinkList L = (LinkList)malloc(sizeof(LinkList));
	ListInsert(L, 1, 10);
	ListInsert(L, 2, 20);
	ListInsert(L, 3, 30);
	ListInsert(L, 4, 40);*/

	LinkList L;
	L = List_HeadInsert(L);
	LNode *cur = L->next;
	while (cur->next != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	
}