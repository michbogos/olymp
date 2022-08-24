#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m; i++){
        cin >> b[i];
    }
    a.push_back(INT32_MAX);
    b.push_back(INT32_MAX);
    int ib = 0;
    int ia = 0;
    for(int i = 0; i < n+m; i++){
        if(a[ia] < b[ib]){
            c.push_back(a[ia]);
            ia ++;
        }
        else{
            c.push_back(b[ib]);
            ib ++;
        }
    }
    for(int i : c){
        cout << i << " ";
    }
    return 0;
}