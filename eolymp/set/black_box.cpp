#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    multiset<int> s;
    vector<int> arr(n);
    vector<int> arr_q(q);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < q; i++){
            cin >> arr_q[i];
    }
    int idx = 0;
    for(int i = 0 ; i < n; i++){
        while(i == arr_q[idx]){
            auto it = s.begin();
            advance(it, idx);
            cout << *it << "\n";
            idx += 1;
        }
        s.insert(arr[i]);
    }
    return 0;
}