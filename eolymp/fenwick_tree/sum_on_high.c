#include<stdio.h>

long fenwick[1000002];
long N = 1000002;

long sum(long i){
    long res = 0;
    for(; i >= 0; i = (i & i+1)-1) res += fenwick[i];
    return res;
}

void update(long i, long delta){
    for(; i < N; i = i | i+1) fenwick[i] += delta;
}

void update_range(long l, long r, long delta){
    update(l-1, -1 * delta);
    update(r, delta);
}

long range_sum(long l, long r){
    return sum(r) - sum(l);
}

long get_element(long i){
    return sum(i+1) - sum(i);
}

long get_range_element(long i){
    return range_sum(i, N);
}

int main(){
      long n;
      long m;
    scanf("%d %d", &n, &m);
    for(long i = 0; i < m; i++){
        char c;
        scanf(" %c", &c);
        if(c == 'A'){
              long l;
              long r;
              long delta;
            scanf("%d %d %d", &l, &r, &delta);
            update_range(l+1, r+1, delta);
        }
        else if(c == 'Q'){
            long idx;
            scanf("%d", &idx);
            printf("%d", get_range_element(idx));
        }
    }
    return 0;
}