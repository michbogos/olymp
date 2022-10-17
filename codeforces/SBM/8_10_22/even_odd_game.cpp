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
        int a = 0;
        int b = 0;
        for(int i = 0; i < arr.size(); i++){
            if(i%2 == 0){
                if(arr[i] % 2 == 0){
                    a += arr[i];
                }
            }
            else{
                if(arr[i] % 2 == 1){
                    b += arr[i];
                }
            }
        }
        if(a > b){
            printf("Alice\n");
        }
        else if(b > a){
            printf("Bob\n");
        }
        else{
            printf("Tie\n");
        }
    }
    return 0;
}