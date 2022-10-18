#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> books;
    int num_operations, operation, book;
    cin >> num_operations;
    for(int i = 0; i < num_operations; i ++){
        cin >> operation;
        if(operation == 1){
            cin >> book;
            books.push_back(book);
        }
        if(operation == 2){
            cin >> book;
            books.push_front(book);
        }
        if(operation == 3){
            cout << books.back() << "\n";
            books.pop_back();
        }
        if(operation == 4){
            cout << books.front() << "\n";
            books.pop_front();
        }
    }
    return 0;
}