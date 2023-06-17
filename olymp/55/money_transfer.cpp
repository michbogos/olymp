#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int res=((n/107)*100);
    int cost = (n/107)*107-(n/107)*100;
    if(n%107>7){
        res += (n%107)-7;
        cost += 7;
    }
    cout << res << " " << cost;
    return 0;
}