#include<stdio.h>

int PALINDROME[16][2] = {{00, 00}, {01, 10}, {02, 20}, {03, 30}, {04, 40}, {05, 50}, {10, 01}, {11, 11}, {12, 21}, {13, 31}, {14, 41}, {15, 51}, {20, 02}, {21, 12}, {22, 22}, {23, 32}};

int main(){
    int h, m, t, step;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int count = 0;
        scanf("%d:%d %d", &h, &m, &step);
        while(h <= 23){
            h += m/60;
            m = m%60;
            for(int u = 0; u < 16; u++){
                if(PALINDROME[u][0] == h && PALINDROME[u][1] == m){
                    count ++;
                    }
                }
                m += step;
            }
            printf("%d", count);
        }
    return 0;
}