#include<iostream>
#include<set>

struct Client{
    int id;
    int priority;
};

bool cmp(Client a, Client b){
    if(a.priority > b.priority){
        return false;
    }
    else{
        return true;
    }
}

using namespace std;

int main(){
    set<Client, decltype(cmp)*> s(cmp);
    int c = -1;
    while(c != 0){
        cin >> c;
        if(c == 0){
            exit(0);
        }
        if(c == 2){
            if(s.empty()){
                cout << "0\n";
            }
            else{
                cout << prev(s.end())->id << "\n";
                s.erase(prev(s.end()));
            }
        }
        if(c == 3){
            if(s.empty()){
                cout << "0\n";
            }
            else{
                cout <<  s.begin()->id << "\n";
                s.erase(s.begin());
            }
        }
        if(c == 1){
            int n, k;
            cin >> n >> k;
            s.insert({n, k});
        }
    }
    return 0;
}