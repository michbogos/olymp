#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    int s = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i = 0 ; i< nums.size()-1; i++){
        s += nums[i+1]-nums[i]-1;
    }  
    cout << s;  
    return 0;
}