#include<algorithm>
#include<vector>
#include<iostream>

struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

int main(){
    int n;
    std::cin >> n;
    std::vector<int> even;
    std::vector<int> odd;
    int num;
    for(int i = 0; i < n;i ++){
        std::cin >> num;
        if (num % 2 == 0){
            even.push_back(num);
        }
        else{
            odd.push_back(num);
        }
    }
    
    std::sort(even.begin(), even.end(), greater());
    std::sort(odd.begin(), odd.end());
    for(int i = 0; i < odd.size(); i++){
        std::cout << odd[i] << " ";
    }
    for(int i = 0; i < even.size(); i++){
        std::cout << even[i] << " ";
    }
    return 0;
}