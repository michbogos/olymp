#include<iostream>
#include<vector>
#include<string>
#include<numeric>

//16 2
//1100011001100001

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> arr;
    if(s[0] == '0'){
        arr.push_back(0);
    }
    int counter = 0;
    for(int i = 0; i < n-1; i++){
        counter++;
        if(s[i] != s[i+1]){
            arr.push_back(counter);
            counter = 0;
        }
    }
    arr.push_back(counter+1);
    if(*prev(s.end()) == '0'){
        arr.push_back(0);
    }
    if(arr.size() < 2*k+2){
        cout << n << "\n";
        exit(0);
    }
    int mx = accumulate(arr.begin(), arr.begin()+2*k+1, 0);
    int curr = mx;
    for(int i = 0; i < arr.size()-(2*k+2); i+=2){
        curr = curr-arr[i]-arr[i+1]+arr[i+2*k+1]+arr[i+2*k+2];
        mx = max(mx, curr);
    }
    cout << mx << "\n";
    return 0;
}