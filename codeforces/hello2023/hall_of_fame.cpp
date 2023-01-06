#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int l = 0;
    int r = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] = 'L'){
            r = min(r,i);
        }
        else{
            l = min(l, i);
        }
    }
    return 0;
}