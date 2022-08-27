#include<iostream>
using namespace std;

int main(){
    long long n, s;
    cin >> n >> s;
    long long sol = 0;
    //cout << s;
    while(s > 0){
        sol += s/min(n, s);
        s -= min(n,s)*(s/min(n, s));
        //cout << s;
    }
    cout << sol << "\n";
    return 0;
}