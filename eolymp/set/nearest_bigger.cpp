#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    vector<int> nums(n);
    for(int i=0;i < n; i++){
        int num;
        cin >> num;
        nums[i] = num;
    }
    for(int i = n-1; i >= 0; i--){
        s.insert(nums[i]);
        auto it = s.find(nums[i]);
        s.erase(s.begin(), it);
        it++;
        if(it == s.end()){
            nums[i] = 0;
        }
        else{
            nums[i] = *it;
        }
    }
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}