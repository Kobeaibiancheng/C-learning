#define InitSize 100
#include<iostream>
using namespace std;

typedef struct{
	int *data;
	int length;
	int MaxSize;
}SeqList;

bool ListInsert(SeqList &L, int i, int e){
	if (i < 1 || i > L.length + 1){
		return false;
	}
	//用数组的方式访问
	for (int j = L.length; j >= i; j--){
		L.data[j] = L.data[j - 1];
	}

	/*while () {

	}
	*L.data = *(L.data - 1);
	*/

	L.data[i - 1] = e;
	L.length++;
	return true;
}
bool ListDelete(SeqList &L, int i, int &e) {
	if (i < 1 || i > L.length) {
		return false;
	}
	e = L.data[i - 1];
	for (int j = i - 1; j < L.length; j++) {
		L.data[j] = L.data[j + 1];
	}
	L.length--;
	return true;
}

//打印顺序表
void display(SeqList &L) {
	for (int i = 0; i < L.length; i++) {
		cout << L.data[i] << endl;
	}
}


//按位查找
int GetElem(SeqList &L, int i) {
	if (i < 1 || i > L.length) {
		return -1;
	}
	return L.data[i - 1];
}

//按值查找(顺序查找)
int LocateElem(SeqList &L, int e) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == e) {
			return i;
		}
	}
	return -1;
}
/*int main(){
	SeqList L;
	//c++动态分配方式
	L.data = new int[InitSize];
	L.length = 0;
	int e = -1;
	ListInsert(L, 1, 5);
	ListInsert(L, 1, 4);
	ListInsert(L, 1, 3);
	ListInsert(L, 1, 2);
	ListInsert(L, 1, 1);

	display(L);


	ListDelete(L, 1, e);
	cout << e << endl;
	ListDelete(L, 3, e);
	cout << e << endl;

	display(L);

	cout << GetElem(L,1) << endl;
	cout << LocateElem(L, 2) << endl;

	//cout << L.data << endl;
	//c动态分配方式
	//L.data = (int*)malloc(sizeof(int)*InitSize);


}*/