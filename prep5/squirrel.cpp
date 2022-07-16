#include<stack>
#include<iostream>

using namespace std;

stack<pair<int, int>> st;

void push(int x){
    int new_max = st.empty() ? x : max(x, st.top().second);
    st.push({x, new_max});
}

void pop(){
    st.pop();
    cout << st.top().second << "\n";
}

int main(){
    int nut;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nut;
        if(nut > 0){
            push(nut);
        }
        else{
            pop();
        }
    }
    return 0;
}