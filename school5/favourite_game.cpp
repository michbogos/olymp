#include<map>
#include<iostream>

int main(){
    int n, a, b, max;
    std::map<int, int> d;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> a >> b;
        try
        {
            d[a] += b;
        }
        catch(const std::exception& e)
        {
            d[a] = b;
        }
        
    }
    max = 0;
    int key;
    for (auto const& x : d){
        if(x.second > max){
            max = x.second;
            key = x.first;
        }
    }
    std::cout << key << "\n";
    return 0;
}