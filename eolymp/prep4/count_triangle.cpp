#include<iostream>

using namespace std;

unsigned long long T(unsigned long long x){
    return(x*x+1)/2;
}

int main(){
    int n, level, l,  count;
    count = 0;
    cin >> n;
    while(cin >> l){
        count = 0;
        if(l % 2 == 0){
            level = l;
            level -= 1;
            count += T(level);
            level -= 2;
            while(level > 1){
                count += T(level);
                level -= 2;
            }
        }
        else{
            for(int i = 1; i <= l; i++){
                count += T(i);
            }
        }
        cout << count << "\n";
    }

    return 0;
}
