#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mx = 0;
        string s;
        cin >> s;
        unordered_multiset<char> s1;
        unordered_multiset<char> s2(s.begin(), s.end());
        int right_size = unordered_set<char>(s2.begin(), s2.end()).size();
        int left_size = 0;
        for(char c : s){
            s1.insert(c);
            auto itr = s2.find(c);
            if(itr != s2.end()){
                s2.erase(itr);
            }
            if(s1.count(c) == 1) left_size ++;
            if(s2.count(c) == 0) right_size --;
            mx = max(mx, right_size + left_size);
        }
        cout << mx << "\n";
    }
    return 0;
}