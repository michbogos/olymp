#include<fstream>
#include<vector>

using namespace std;

int main(){
    long long n;
    ifstream cin = ifstream("points.dat");
    ofstream cout = ofstream("points.sol");
    cin >> n;
    vector<pair<long long, long long>> points(n);
    vector<long long> dpx(n+1, 0);
    vector<long long> dpxx(n+1, 0);
    vector<long long> dpy(n+1, 0);
    vector<long long> dpyy(n+1, 0);
    for(long long i = 0; i < n; i++){
        cin >> points[i].first >> points[i].second;
        dpx[i+1] = dpx[i]+points[i].first;
        dpxx[i+1] = dpxx[i]+points[i].first*points[i].first;
        dpy[i+1] = dpy[i]+points[i].second;
        dpyy[i+1] = dpyy[i]+points[i].second*points[i].second;
    }
    long long res = 0;
    for(long long i = 0; i < n; i++){
        res += i*points[i].first*points[i].first - 2*points[i].first*dpx[i]+dpxx[i];
        res += i*points[i].second*points[i].second - 2*points[i].second*dpy[i]+dpyy[i];
    }
    cout << res;
    return 0;
}