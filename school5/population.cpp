#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

int main(){
    int n, a, b;
    std::map<int, int> d;
    std::cin >> n;
    std::vector<int> same;
    for(int i = 0; i < n; i++){
        std::cin >> a;
        try
        {
            d[a] += 1;
        }
        catch(const std::exception& e)
        {
            d[a] = 1;
        }
    }
    int max = 0;
    for (auto const& x : d){
        if(x.second > max)
            max = x.second;
    }
    for (auto const& x : d){
        if(x.second == max)
            same.push_back(x.first);
    }
    std::cout << *std::min_element(same.begin(), same.end());
    return 0;
}