#include<bitset>
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    auto bits = bitset<26>();
    int mx = 0;
    bits.reset();
    int current = 0;
    string s;
    string tmp;
    while(cin >> tmp){
        s += tmp;
    }
    for(char c : s){
        if(c == '\n'){
            if(!(cin >> c)){
                cout << mx;
                return 0;
            }
        };
        if(bits[c-'a']){
            mx = max(current, mx);
            bits.reset();
            current = 0;
        }
        bits.set(c-'a');
        current ++;
    }
    cout << mx;
    return 0;
}