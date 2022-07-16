#include<stdio.h>

int array[1000001] = {0};
char command;
int l, r, d, n, num_q, len;

int main(){
    scanf("%d %d", &len, &num_q);
    for(int i = 0; i < num_q; i++){
        scanf("%c", &command);
        if(command == 'A'){
            scanf("%d %d %d", &l, &r, &d);
            for(int u = l; u <= r; u++){
                array[u] += d;
            }
        }
        else if(command == 'Q'){
            scanf("%d", &n);
            printf("%d\n", array[n]);
        }
        else if(command == '\n'){
            i --;
        }
    }
    return 0;
}