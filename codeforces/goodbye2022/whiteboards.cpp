#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> a(n);
        vector<long long> b(m);
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            int idx = 0;
            long long mx = 0;
            for(int j = 0; j < n; j++){
                if(b[i]-a[j] > mx){
                    mx = b[i]-a[j];
                    idx = j;
                }
            }
            a[idx] = b[i];
        }
        long long s = 0;
        for(long long i = 0; i < n; i++){
            s += a[i];
        }
        cout << s << "\n";
    }
    return 0;
}