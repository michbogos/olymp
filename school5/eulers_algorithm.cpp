#include<iostream>
#include<algorithm>

int main(){
    int n, a, b, c, d;
    std::cin >> n;
    for(int i=0; i<n; i++){
        while(a > 0 && b > 0){
            if(b > a){ std::swap(a, b);}
            a -= b;
        }
    }
    return a + b;
}