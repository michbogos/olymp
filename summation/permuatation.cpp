#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int d[2000001] = {0};
    vector<int> not_in_permutation;
    int n;
    int num;
    int min = 1000000000;
    cin >> n;
    for(int i=0; i<= n; i++){
        cin >> num;
        d[num] += 1;
    }
    for(int i = 0; i <= n; i++){
        if(d[i] != 1){
            cout << i << "\n";
            return 0;
        }
    }
    cout << "0" << "\n";
    return 0;
}