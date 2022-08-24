#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    int n, q, num, l, r;
    vector<int> arr;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }
    cin >> q;
    sort(arr.begin(), arr.end());
    for(int i = 0 ; i<q; i++){
        cin >> l >> r;
        int idr = upper_bound(arr.begin(), arr.end(), r)-arr.begin();
        int idl = lower_bound(arr.begin(), arr.end(), l)-arr.begin();
        cout << idr - idl << "\n";
    }
    return 0;
}