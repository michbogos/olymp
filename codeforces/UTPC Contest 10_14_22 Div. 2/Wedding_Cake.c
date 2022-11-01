#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num;
    int layers[5] = {0, 0, 0, 0, 0};
    while(n--){
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            layers[0] ++;
            break;
        case 2:
            if(layers[0] > 0){
                layers[1]++;
                layers[0]--;
            }
            break;
        case 3:
            if(layers[1] > 0){
                layers[2]++;
                layers[1]--;
            }
            break;
        case 4:
            if(layers[2] > 0){
                layers[3]++;
                layers[2]--;
            }
            break;
        case 5:
            if(layers[3] > 0){
                layers[4]++;
                layers[3]--;
            }
            break;
        }
    }
    printf("%d\n", layers[4]);
    return 0;
}