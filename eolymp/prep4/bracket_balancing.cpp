#include<iostream>
#include<stack>
#include<string>

using namespace std;

stack<char> brackets;

int main(){
    int n;
    string line;
    bool flag = true;
    cin >> n;
    for(string line; getline(cin, line);){
        flag = true;
        while(!brackets.empty()){
            brackets.pop();
        }
        cout << line;
        for(char& character : line){
            if(character == '('){
                brackets.push('(');
            }
            else if(character == '['){
                brackets.push('[');
            }
            else if((character == ')') && (brackets.top() == '(')){
                brackets.pop();
                brackets.pop();
            }
            else if((character == ']') && (brackets.top() == '[')){
                brackets.pop();
                brackets.pop();
            }
            else if((character == ')') && (brackets.top() == '[')){
                flag = false;
                break;
            }
            else if((character == ']') && (brackets.top() == '(')){
                flag = false;
                break;
            }
            if((character == (')' || ']')) && brackets.empty()){
                flag = false;
                break;
            }
        }
        if (flag){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}