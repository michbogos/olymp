#include<iostream>

using namespace std;

int m[10000002];
int mm[10000002];

int main(){
    m[1] = 1;
    mm[0] = 0;
    for(int i = 1; i <= 10000002; i++){
        if(m[i]!=0){
            for(int j = 2*i; j <= 10000002; j+=i){
                m[j] -= m[i];
            }
        }
    }
    for(int i = 1; i <= 10000002; i++){
        mm[i] = mm[i-1]+m[i];
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << mm[n] << "\n";
    }
    return 0;
}