#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int c, n;
        cin >> n >> c;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int idx = 0;
        while(c > 0 || idx == n){
                c -= idx + 1;
                if(c >= arr[idx]){
                    c -= arr[idx];
                    idx ++;
                }
                else{
                    break;
                }
        }
        cout << "Output: " << idx << "\n";
    }
    return 0;
}