#include<iostream>
#include<string>
#include<cmath>
int count = 0;

int remove_msd( int i )
{
    return i % (int)pow( 10, ceil( log10(i) ) ) ;
}

int f(int n){
    if (n == 0){
        int tmp = count;
        count = 0;
        return tmp;
         }
    count += ((n%10)*((n%10)+1))/2;
    n -= (n%10);
    n /= 10;
    count += n * 45;
    f(n);
}

int main(){
    int a, b;
    int tmp1, tmp2;
    std::cin >> a >> b;
    while(a > 0 and b > 0){
        std::cout << (f(b) - f(a)) + (std::to_string(a)[0]-'0') << "\n";
        std::cin >> a >> b;
    }
    return 0;
}