#include<iostream>
#include<set>

using namespace std;

struct num{
    int n;
    int index;
};

bool cmp(num a, num b){
    if(a.n > b.n){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    multiset<num, decltype(cmp)*> s(cmp);
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        int num;
        cin >> num;
        s.insert({num, i});
    }
    while(s.size() > 1){
        int a, b;
        cout << s.begin()->index+1;
        a = s.begin()->n;
        s.erase(s.begin());
        cout << " ";
        cout << s.begin()->index+1;
        b = s.begin()->n;
        s.erase(s.begin());
        cout << "\n";
        s.insert({(a+b)/2, n});
        n ++;
    }
    return 0;
}