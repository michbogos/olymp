#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int matrix[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0 ; j < b; j++){
            cin >> matrix[i][j];
        }
    }
    for(int k = 0; k < a; k++){
        for(int l = 0 ; l < b; l++){
            if((matrix[k][0] ^ matrix[0][l]) != matrix[k][l]){
                int ref = matrix[k][0] ^ matrix[0][l];
                int tru = matrix[k][l];
                cout << "NO" << "\n";
                exit(0);
            }
        }
    }
    cout << "YES" << "\n";
    for(int i = 0; i < a; i++){
        cout << matrix[i][0] << " ";
    }
    cout << "\n";
    for(int i = 0; i < b; i++){
        cout << matrix[0][i] << " ";
    }
    return 0;
}