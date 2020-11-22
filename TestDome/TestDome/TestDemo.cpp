#include<stdio.h>
#include<stdlib.h>



#define MaxSize 50


typedef struct{
	int arr[MaxSize];
	int length;
}SpList;


bool ListInsert(SpList &L, int i, int e) {
	if (i < 1 || i > L.length+1) {
		return false;
	}
	for (int j = L.length; j >= i; j--) {
		L.arr[j] = L.arr[j - 1];
	}
	L.arr[i-1] = e;
	L.length++;
	return true;
}


bool ListDelete(SpList &L, int i, int &e) {
	if (i < i || i > L.length){
		return false;
	}
	e = L.arr[i - 1];
	for (int j = i - 1; j < L.length; j++) {
		L.arr[j] = L.arr[j + 1];
	}

	L.length--;
	return true;
}

int main() {
	SpList L;
	int e = -1;
	L.length = 0;
	ListInsert(L, 1, 5);
	ListInsert(L, 2, 6);
	ListInsert(L, 3, 7);
	ListInsert(L, 4, 8);
	ListInsert(L, 5, 9);
	ListInsert(L, 6, 10);
	ListInsert(L, 1, 4);
	ListInsert(L, 3, 3);



	ListDelete(L, 1, e);
	printf("%d\n", e);
	system("pause");
	return 0;
}