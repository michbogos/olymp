#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i1 = 0;
    int i2 = 0;
    int m = 0;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int, int> distinct;
    while(i1 < n){
        m = max(m, i1-i2);
        //cout << i1 << "\n";
        if(distinct.find(arr[i1]) != distinct.end()){
            //cout << arr[i1] << "\n";
            i2 = distinct[arr[i1]];
            i1 = i2+1;
            distinct.clear();
            distinct.insert({arr[i2], i2});
            }
        else{
            distinct.insert({arr[i1], i1});
            //cout << arr[i1] << "\n";
            }
        i1 ++;
        }
    cout << m-1;
    return 0;
}