#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    char i;
    for(int i = 0; i< n; i++){
        cin >> i;
        s = s^(i-'0');
    }
    cout << char(s+'0');
    return 0;
}