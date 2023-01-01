#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> stck;
    for(char c : s){
        if(!stck.empty() && stck.top() == '(' && c == ')'){
            stck.pop();
        }
        else{
            stck.push(c);
        }
    }
    cout << stck.size();
    return 0;
}