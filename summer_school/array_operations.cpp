#include<iostream>
#include<set>

int main(){
    std::string command;
    int n;
    std::set<int> s;
    while(std::cin >> command >> n){
        if(command == "insert"){
            s.insert(n);
        }
        else if(command == "delete"){
            s.erase(n);
        }
        else{
            if(s.count(n) > 0){
                std::cout << "\ntrue\n";
            }
            else{
                std::cout << "\nfalse\n";
            }
        }
    }
    return 0;
}