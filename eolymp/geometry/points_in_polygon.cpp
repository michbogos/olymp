#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    float area;
    int num_points = 0;
    vector<pair<float, float>> points(n);
    for(int i = 0; i < n; i++){
        cin >> points[i].first >> points[i].second;
    }
    for(int i = 0; i < n; i++){
        area += points[(i)%n].first*points[(i+1)%n].second - points[(i)%n].second*points[(i+1)%n].first;
    }
    area = abs(area);
    area/=2.0f;

    for(int i = 0; i < n; i++){
        num_points += __gcd((int)abs(points[i%n].first-points[i%n].first), (int)abs(points[(i+1)%n].second-points[i%n].second));
    }
    cout << (num_points/2-1-(int)area)*-1;
    return 0;
}