#include<vector>
#include <iostream>

using namespace std;

vector<int> phi_to_n(int n) {
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
    return phi;
}
int main(){
    int n;
    int reqs[n+1];
    long double H;
    cin >> n;
    int max = 0;
    int a;
    for(int i = 0; i < n; i++){
        cin >>a;
        reqs[i] = a;
        if(a > max){
            max = a;
        }
    }
    vector<int> totient_array = phi_to_n(max);

    for(int i = 0; i < n; i++){
        H = 0;
        for(int j = 0; j <= reqs[i]; j++){
            for(int k = 0; k <= reqs[i]; k++){
                H = H + totient_array[j]*totient_array[k];
            }
        }
        cout << H << "\n";
    }

    return 0;
}



int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}