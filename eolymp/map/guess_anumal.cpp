#include<unordered_set>
#include<string>
#include<vector>
#include<iostream>

using namespace std; 


int main(){
    vector<unordered_set<string>> arr;
    int n;
    cin >> n;
    arr.resize(n);
    for(int i = 0; i < n; i++){
        string tmp;
        int k;
        cin >> tmp;
        cin >> k;
        for(int j = 0; j < k; j ++){
            cin >> tmp;
            arr[i].insert(tmp);
        }
    }
    int res  =0;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res = 0;
            if(i == j) continue;
            for(auto element : arr[i]){
                if(arr[j].count(element)>0){
                    res++;
                }
            }
            count = max(count, res);
        }
    }
    cout << count+1 << '\n';
}