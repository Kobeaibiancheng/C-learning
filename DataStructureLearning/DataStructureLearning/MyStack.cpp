#include<stdlib.h>
typedef struct LiStack{
	int data;
	LiStack* next;
}Linknode,*LinkStack;

//��ͷ����ʼ��
void InitStack(LinkStack &S) {
	S = (Linknode*)malloc(sizeof(Linknode));
	S->next = NULL;
}



//bool Push(LinkStack &S, int x) {//��ͷ���push
//	Linknode *node = (Linknode*)malloc(sizeof(Linknode));
//	node->next = S->next;
//	S -> next = node;
//	return true;
//}

//����ͷ���push
bool Push(LinkStack &S, int x){
	Linknode *node = (Linknode*)malloc(sizeof(Linknode));
	S ->next = node;
	S = node;
	return true;
}


bool Empty(LinkStack &S) {//��ͷ����п�
	if (S->next == NULL) {
		return true;
	}
	else{
		return false;
	}
}

//bool Pop(LinkStack &S, int &x) {//��ͷ���pop
//	if (Empty(S)) {
//		return false;
//	}
//	Linknode *p = S->next;
//	x = p->data;
//	S->next = p->next;
//	free(p);
//	return true;
//}

//����ͷ�ڵ�pop
bool Pop(LinkStack &S, int x) {
	if (Empty(S)) {
		return false;
	}
	Linknode *p = S->next;
	x = S -> data;
	S = p;
	free(p);
	return true;
}

void main(){
	LinkStack S = (LinkStack)malloc(sizeof(LinkStack));
	S->data = -1;
	S->next = NULL;
	Push(S, 0);
	Push(S, 1);
	return;
}

