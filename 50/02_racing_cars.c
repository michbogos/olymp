#include<iostream>
#include<math.h>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    int thing1 = (int)ceilf(a/(float)b);
    int thing2 = (int)ceilf(a/(float)c);
    if(thing1 > thing2){
        printf("%d",(thing1-1)*(int)b);
    }
    else{
        printf("%d",(thing2-1)*(int)c);
    }
    return 0;
}