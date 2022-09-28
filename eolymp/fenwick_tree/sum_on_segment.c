#include<stdio.h>

#define G(i) ((i) & -(i))
#define SIZE 100001

int A[SIZE];

int sum(int r){
        int res = 0;
        res += A[0];
        for(; r != 0; r -= G(r)){
            res += A[r];
        }
        return res;
    }

void add(int i, int delta) {
	if (i == 0) {
		A[0] += delta;
		return;
	}
	for (; i < SIZE; i+= G(i))
		A[i] += delta;
}


int main(){
    int n;
    int k;
    char command;
    int l;
    int r;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < 2*k; i++){
        scanf("%c %d %d", &command, &l, &r);
        if(command == 'A'){
            add(l, r);
        }
        if(command == 'Q'){
            printf("%d\n", sum(r) - sum(l-1));
        }
    }
    return 0;
}