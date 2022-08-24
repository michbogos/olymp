#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int u = 0 ; u < t; u++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0 ; i < n; i++){
            cin >> arr[i];
        }
        int ia = 0;
        int ib = arr.size()-1;
        int sa = 0;
        int sb = 0;
        int s = 1;
        sa += arr[ia];
        ia ++;
        while(ia <= ib){
            if(sb < sa){
                sb += arr[ib];
                ib --;
            }
            else{
                sa += arr[ia];
                ia ++;
            }
            if(sa == sb){
                s = ia + arr.size()-ib;
            }
            //cout<<"\n" <<sa << " " << sb << "\n";
        }
        cout << s-1 << "\n";
    }
    return 0;
}