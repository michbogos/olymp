#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        long long a = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (arr[i] % 2 == 0) {
                    a += arr[i];
                }
            }
            else {
                if (arr[i] % 2 == 1) {
                    a -= arr[i];
                }
            }
        }
        if(a == 0){
            printf("Tie\n");
        }
        else if(a > 0){
            printf("Alice\n");
        }
        else{
            printf("Bob\n");
        }
    }
    return 0;
}