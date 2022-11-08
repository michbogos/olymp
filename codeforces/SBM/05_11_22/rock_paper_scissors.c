#include<stdio.h>

int min(int a, int b){
    if(a > b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int ra, pa, sa, rb, pb, sb;
    int n;

    scanf("%d", &n);
    scanf("%d %d %d", &ra, &sa, &pa);
    scanf("%d %d %d", &rb, &sb, &pb);
    int res = 0;
    int res1 = min(pa, rb)+min(sa, pb)+min(ra, sb);
    res += min(pb, ra) + min(sb, pa) + min(rb, sa);
    int m1 = min(pb, ra);
    int m2 = min(sb, pa);
    int m3 = min(rb, sa);
    pb -= m1;
    ra -= m1;
    sb -= m2;
    pa -= m2;
    rb -= m3;
    sa -= m3;
    printf("%d %d %d %d %d %d", pa, pb, ra, rb, sa, sb);
    printf("%d %d",res, res1);
    return 0;
}