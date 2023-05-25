#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    float area;
    vector<pair<float, float>> points(n);
    for(int i = 0; i < n; i++){
        cin >> points[i].first >> points[i].second;
    }
    for(int i = 0; i < n; i++){
        area += points[(i)%n].first*points[(i+1)%n].second - points[(i)%n].second*points[(i+1)%n].first;
    }
    area = abs(area);
    cout << fixed << setprecision(3) << area/2.0f;
    return 0;
}