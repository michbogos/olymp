#include<stdio.h>

int main(){
    int h, m, t, step;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int count = 0;
        scanf("%d:%d %d", &h, &m, &step);
        while(h <= 24 && m < 59){
            h += m/60;
            m = m%60;
            if(h == m){
                count ++;
            }
            m += step;
        }
        printf("%d", count);
    }
    return 0;
}