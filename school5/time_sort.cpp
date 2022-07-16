#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

int main(){
    int n, a, b, c;
    std::cin >> n ;
    std::vector<int> items(n);
    for(int i = 0; i < n; i++){
        std::cin >> a >> b >> c;
        a *= 10000;
        b *= 100;
        a += b + c;
        items[i] = a;
    }
    std::sort(items.begin(), items.end());
    for(int i : items){
        if(std::to_string(i).length() == 6){
        std::cout 
                << std::to_string(i).substr(0, 2) 
                << " " 
                << std::to_string(i).substr(2, 2) 
                << " " 
                << std::to_string(i).substr(4, 2) 
                << "\n";
        }
        else{
            std::cout 
                << std::to_string(i).substr(0, 1) 
                << " " 
                << std::to_string(i).substr(1, 2) 
                << " " 
                << std::to_string(i).substr(3, 2) 
                << "\n";
        }
    }
    return 0;
}