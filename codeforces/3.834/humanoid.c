#include<stdio.h>

int min(int x, int y){
    if(x > y){
        return y;
    }
    else{
        return x;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, h;
        int blue = 1;
        int green = 1;
        int play = 1;
        scanf("%d %d", &n, &h);
        for(int i = 0; i < n; i++){
            int a;
            scanf("%d", &a);
            if(play){
                if(h > a){
                    h += a/2;
                }
                if(h == a){
                    if(green){
                        h*= 2;
                        h += a/2;
                        green -= 1;
                    }
                    else{
                        h *= 3;
                        h += a/2;
                        blue -= 1;
                    }
                }
                if(h < a){
                    int g = h* 2*green;
                    int b = h*3*blue;
                    if(min(g, b) < a){
                        if(b < a){
                            play = 0;
                        }
                        else{
                            blue -= 1;
                            h *= 3;
                            h += a/2;
                        }
                    }
                    else{
                        green -= 1;
                        h *= 2;
                        h += a/2;
                    }
                }
            }
            printf("%d\n", h);
        }
    }
    return 0;
}