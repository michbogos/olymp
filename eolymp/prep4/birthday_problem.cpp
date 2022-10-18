#include<iostream>
#include<iomanip>

int main(){
    float n;
    float sol;
    while(std::cin >> n){
        sol = 0.0f;
        if (n > 365.0f){
            sol = 100.00000000f;
        }
        else{
            float inverse = 1.0f;
            for(float i = 1; i < n; i++){
                inverse *= ((365.0f-i)/365.0f);
            }
            sol = (1.0f - inverse)*100.0f;
        }
        std::cout << std::fixed << std::setprecision(8) << sol << "%" << "\n";
    }
    return 0;
}