#include<iostream>
#include<set>
#include<numeric>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    printf("%.4f", (float)accumulate(s.begin(), s.end(), 0)/(float)s.size());
    return 0;
}