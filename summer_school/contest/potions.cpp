#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, k;
    int min = INT32_MAX;
    int max = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    int count = 0;
    vector<int>::iterator ptr = v.begin();
    while(ptr!=v.end()){
        if(min > *ptr){
            min = *ptr;
        }
        if(max < *ptr){
            max = *ptr;
        }
        else{
            if(abs(min-max) > k){
                count ++;
                min = INT32_MAX;
                max = 0;
                ptr --;
            }
            ptr = next(ptr);
        }
    }
    cout << count+1 << "\n";
    return 0;
}