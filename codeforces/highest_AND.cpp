#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(t--){
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for(i = 0; i < n; i ++){
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
    }
    return 0;
}