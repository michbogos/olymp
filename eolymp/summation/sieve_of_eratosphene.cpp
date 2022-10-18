#include<iostream>
#include<vector>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> lp(b +1);
    vector<int> pr;
    for (int i=2; i <= b; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j=0; j < (int)pr.size() && pr[j] <= lp[i] && i*pr[j] <= b; ++j) {
            lp[i * pr[j]] = pr[j];
        }
    }
    int count = 0;
    for(int i : pr){
        if(a <= i && i <= b){
            cout << i << " ";
        }
    }
    
    return 0;
}