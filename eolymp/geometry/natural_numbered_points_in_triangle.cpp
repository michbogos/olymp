#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    while(x1 != 0 && y1 != 0 && x2 != 0 && y2!= 0 && x3 != 0 && y3 != 0){
        float num_points = 0;
        num_points += __gcd(abs(x1-x2), abs(y1-y2));
        num_points += __gcd(abs(x2-x3), abs(y2-y3));
        num_points += __gcd(abs(x3-x1), abs(y3-y1));
        float area = abs((x1*y2-x2*y1)+(x2*y3-y2*x3)+(x3*y1-y3*x1))/2.0f;
        cout << (int)(((num_points/2.0f)-area-1.0f)*-1) << "\n";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    }
    return 0;
}