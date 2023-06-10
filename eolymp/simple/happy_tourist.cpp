#include<bits/stdc++.h>

using namespace std;

int main(){
    int l, p, v;
    cin >> l >> p >> v;
    int i = 1;
    while(l != 0 && p != 0 && v != 0){
        if(v%p < 1){
            cout << "Case " << i << ": " << (v/p)*l + v%p << "\n";
        }
        else{
            cout << "Case " << i << ": " << (v/p)*l + l << "\n";
        }
        i ++;
        cin >> l >> p >> v;
    }
    return 0;
}