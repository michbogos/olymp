#include<iostream>
#include<set>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        set<pair<int, int>> s;
        int n;
        cin >> n;
        while(n--){
            int a, b;
            cin >> a >> b;
            auto res = s.find({b, a});
            if(res != s.end()){
                s.erase(res);
            }
            else{
                s.insert({a, b});
            }
        }
        if(s.size() > 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}