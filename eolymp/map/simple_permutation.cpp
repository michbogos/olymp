#include<map>
#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    string a;
    string b;
    int idx = 0;
    while(getline(cin, a)){
        getline(cin, b);
        map<char, int> m1;
        map<char, int> m2;
            for(char c : a){
            m1[c]++;
            }

            for(char c : b){
            m2[c]++;
            }
        vector<char> res;
        for(auto p : m1){
            int mn = min(m1[p.first], m2[p.first]);
            for(int i = 0; i < mn; i++){
                res.push_back(p.first);
            }
        }
        for(char element : res){
            cout << element;
        }
        cout << "\n";
    }

    return 0;
}