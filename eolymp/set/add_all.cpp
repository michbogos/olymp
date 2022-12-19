#include <bits/stdc++.h>

using namespace std;
multiset<long long> a;

int main(){
    long long n, min1, min2, s=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        a.insert(x);
    }

    while(a.size()>1){
        min1 = * a.begin();
        a.erase(a.begin());
        min2 = *a.begin();
        a.erase(a.begin());
        s += min1 + min2;
        a.insert(min1 + min2);
    }
    cout << s << endl;
    return 0;
}