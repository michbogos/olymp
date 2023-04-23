#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>

using namespace std;

int main(){
    int n;
    auto in = ifstream("discount.dat");
    auto out = ofstream("discount.sol");
    in >> n;
    vector<int> arr(n);
    int s = 0;
    for(int i = 0; i < n; i++){
        in  >> arr[i];
        s += arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    for(int i = 2; i < n; i+=3){
        s -= arr[i];
    }
    out << s << "\n";
    return 0;
}