#define MAXSIZE 10;

typedef struct{
	char ch[10];
	int length;
}SString;

int index(SString S, SString T){
	int i = 1;
	int j = 1;
	int k = 1;
	while (i <= S.length && j <= T.length) {
		if (S.ch[i] == T.ch[j]) {
			i++;
			j++;
		}else{
			k++;
			i = k;
			j = 1;
		}
	}
	if (j > T.length){
		return k;
	}else{
		return 0;
	}
	
}









