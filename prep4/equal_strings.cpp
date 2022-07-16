#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int r1, r2, l1, l2;
    for(int i = 0; i < n; i ++){
        cin >> l1 >> r1 >> l2 >> r2;
        if(s.substr(l1-1, r1-l1+1).compare(s.substr(l2-1, r2-l2+1)) == 0){
            cout << "+";
        }
        else{
            cout << "-";
        }
    }
    return 0;
}