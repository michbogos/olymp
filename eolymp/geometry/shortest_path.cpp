#include<bits/stdc++.h>

using namespace std;

struct point{
    double x, y;
};

double dist2(point a, point b){
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}

double dist(point a, point b){
    return sqrt(dist2(a, b));
}


int main(){
    point a, b, o;
    double r;
    cin >> a.x >> a.y >> b.x >> b.y >> o.x >> o.y >> r;
    double l1 = sqrt(dist2(a, o)-r*r);
    double l2 = sqrt(dist2(b, o)-r*r);
    double a1 = asin(l1/dist(a, o));
    double a2 = asin(l2/dist(b, o));
    double alpha = acos((dist2(a,o)+dist2(b,o)-dist2(a, b))/ (2* dist(a, o)*dist(b, o)));
    alpha = alpha - a1 - a2;
    double res;
    if (alpha > 0){
        res = l1+l2+r*alpha;
    }
    else{
        res = dist(a, b);
    }
    cout << fixed << setprecision(3) << res;
    return 0;
}