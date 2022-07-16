#include<stack>
#include<iostream>

using namespace std;

struct soldier{
    int height;
    int height_max;
    int index_max;
}

stack<soldier> st;

void push(soldier x){
    if(st.empty()){
        st.push(x)
    }
    else if(st.top().height < x.height){
        st.push(x);
    }
    else if(st.top().height)
}

void pop(){
    st.pop();
    cout << st.top().second << "\n";
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        push(i);
    }
    return 0;
}