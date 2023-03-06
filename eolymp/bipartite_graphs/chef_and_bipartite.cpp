#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,d,D;
        cin >> n >> m >> d >> D;

        if(d*n > m){
            cout<<-1<<"\n";
            continue;
        }

        if(D*n < m){
            cout<<-1<<"\n";
            continue;
        }

        int drift = 0;
        int cnt = 0;

        while(cnt < m){
            for(int i=0;i<n && cnt < m;i++){
                cout << (i+1) << " " << (i+drift)%n+1 << "\n";
                cnt++;
            }
            drift++;
        }
    }
    return 0;
}
