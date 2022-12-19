#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mx = 0;
        vector<int> arr(n);
        for(int i = 0 ; i < n; i++){
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int num = arr[0];
        int idx = 0;
        while(arr[idx] == num){
            idx += 1;
        }
        num = arr[idx];
        while(arr[idx] == num){
            idx += 1;
        }
        if(idx == n+1){
            if(arr[idx] == arr[0] && abs(arr[idx-1]-arr[0])%2 == 0){
                cout << arr[0]-abs(arr[idx-1]-arr[0])/2 << "\n";
            }
        }
        else{
            if(is_sorted(arr.begin(), arr.end())){
                cout << "0\n";
            }
            else{
                if(is_sorted(arr.rbegin(), arr.rend())){
                    cout << mx;
                }
            }
        }
        
    }
    return 0;
}