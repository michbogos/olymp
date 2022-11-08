#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    int count = 0;
    cin >> n;
    int prefix = 0;
    int num;
    set<int>s;
    s.insert(0);
    for(int i = 1 ; i <= n; i++){
        cin >> num;
        prefix += num;
        if(s.find(prefix) != s.end()){
            s.clear();
            s.insert(0);
            count ++;
            prefix = num;
        }
        s.insert(prefix);
    }
    cout << count;
    return 0;
}