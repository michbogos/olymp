#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, distance;
        cin >> n >> distance;
        int count = 0;
        for(int i = 0; i < n; i++){
            int speed, fuel, usage;
            cin >> speed >> fuel >> usage;
            if(speed*((float)fuel/(float)usage) >= distance){
                count ++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}