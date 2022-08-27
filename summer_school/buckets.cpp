#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    multiset<int> nums;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums.insert(num);
    }
    int count = 0;
    while(!nums.empty()){
        count ++;
        auto r = nums.lower_bound(k);
        if(r == nums.end()){
            if (*r <= k){
            r = prev(r);
        }
        }
        auto l  = nums.lower_bound(k-*r);
        if(*l > k-*r){
            l = nums.end();
        }
        cout << *l << " " << *r << "\n";
        if(l != nums.end()){
            nums.erase(l);
        }
        nums.erase(r);
    }
    cout << count;
    return 0;
}