#include<bits/stdc++.h>

using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);

    if(c >= a && d >= b){
        cout << "Possible"; return 0;
    }
    if(c < a){
        cout << "Impossible"; return 0;
    }

    float diag = sqrt(a*a + b*b);
    float l = sqrt(diag*diag -c*c);
    float alpha = atan(c/l);
    float beta = atan(a/b);
    float gamma = alpha-beta;
    if(a*sin(gamma) + b * cos(gamma) <= d) cout << "Possible"; else cout << "Impossible";
    return 0;
}