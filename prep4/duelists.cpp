#include <iostream>
#include <iomanip>

int main(){
    float n;
    while(std::cin >> n){
        std::cout << std::fixed << std::setprecision(6) << 1 - (((60.0f-n)/60.0f)*((60.0f-n)/60.0f)) << "\n";
    }
    return 0;
}