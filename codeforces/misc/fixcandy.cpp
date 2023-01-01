#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long n ,k, l;
    cin >> n >> k >> l;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    long long count = 0;
    count += (l/n) * k;
    if(l-((l/n)*n) > 0) count += k - (a[l-((l/n)*n)]);
    cout << count;
    return 0;
}