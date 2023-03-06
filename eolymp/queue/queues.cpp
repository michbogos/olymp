#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<long long, vector<long long>, greater<> > pq;

    long long n, k, time, temp;

    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> time;
        if (pq.size() != k) {
            pq.push(time);
        } else {
            temp = pq.top();
            pq.pop();
            pq.push(time + temp);
        }
    }
    while (pq.size() > 1) {
        pq.pop();
    }

    cout << pq.top();

    return 0;
}