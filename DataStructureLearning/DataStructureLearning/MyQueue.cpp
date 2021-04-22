#define MaxSize 10
#include<stdio.h>

typedef struct{
	int data[MaxSize];
	int front;
	int rear;
}SqQueue;
//初始化队列
void InitQueue(SqQueue &Q) {
	Q.front = 0;
	Q.rear = 0;
}
//判断队列是否满
bool QueueFill(SqQueue Q) {
	if ((Q.rear + 1) % MaxSize == Q.front) //满
	{
		return true;
	}
	else
	{
		return false;
	}
}
//入队
bool InQueue(SqQueue &Q, int e){
	if (QueueFill(Q))//满了 返回false
	{
		return false;
	}
	Q.data[Q.rear] = e;
	Q.rear = (Q.rear + 1)% MaxSize;
	return true;
}

//判断队列是否空
bool QueueEmpty(SqQueue Q) {
	return Q.front == Q.rear;
}
//出队
bool DeQueue(SqQueue &Q,int &x){
	if (QueueEmpty(Q))//队列是空 返回false
	{
		return false;
	}
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}

//int main(){
//	SqQueue Q;
//	InitQueue(Q);
//	//bool ret = QueueFill(Q);
//	
//	InQueue(Q, 1);
//	InQueue(Q, 2);
//	InQueue(Q, 3);
//	InQueue(Q, 4);
//	int x = -1;
//	DeQueue(Q, x);
//	DeQueue(Q, x);
//	DeQueue(Q, x);
//	DeQueue(Q, x);
//	return 0;
//}