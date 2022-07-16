#include<iostream>
#include<algorithm>

int main(){
    long n;
    std::cin >> n;
    long num;
    long nums[n];
    for(int i = 0; i < n; i ++){
        std::cin >> num;
        nums[i] = num;
    }
    std::sort(&nums[0], &nums[n-1]);
    for(int i = 0; i < n; i ++){
        std::cout << nums[i] << " ";
    }
    return 0;
}