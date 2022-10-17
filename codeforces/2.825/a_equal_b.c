#include"stdio.h"

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })

int main(){
    int q;
    scanf("%d", &q);
    while(q--){
        int a = 0;
        int b = 0;
        int num;
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &num);
            a += num;
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &num);
            b += num;
        }
        printf("%d\n", max(a, b) - min(a, b));
    }
    return 0;
}