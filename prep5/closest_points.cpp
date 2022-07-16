#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    long n;
    cin >> n;
    vector<long> points(n);
    for(long i = 0; i < n; i++){
        cin >> points[i];
    }
    vector<long> sorted(n);
    copy(points.begin(), points.end(), sorted.begin());
    sort(sorted.begin(), sorted.end());
    long m = 10000000000;
    long a, b = 0;
    for(long i = 1; i < sorted.size(); i++){
        long d1 = abs(sorted[i]-sorted[i-1]);
        m = min(m, d1);
        if(d1 == m){
            a = min(sorted[i], sorted[i-1]);
            b = max(sorted[i], sorted[i-1]);
        }
    }
    long d1 = distance(points.begin(), find(points.begin(), points.end(), a));
    long d2 = distance(points.begin(), find(points.begin(), points.end(), b));
    cout << m << "\n";
    cout << min(d1, d2) << " " << max(d1, d2) << "\n"; 

    return 0;
}