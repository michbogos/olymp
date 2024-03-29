#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; ++k) {
        int n, temp;
        cin >> n;
        deque<int> a, v;

        for (int i = 0; i < n; ++i) {
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end());

        v.push_back(a.front());
        a.pop_front();
        v.push_back(a.back());
        a.pop_back();

        while (!a.empty()) {
            int s, c = 1, max = 0;

            s = abs(a.front() - v.front());
            if (s > max) {
                c = 1;
                max = s;
            }

            s = abs(v.back() - a.front());
            if (s > max) {
                c = 2;
                max = s;
            }

            s = abs(a.back() - v.front());
            if (s > max) {
                c = 3;
                max = s;
            }

            s = abs(v.back() - a.back());
            if (s > max) {
                c = 4;
                max = s;
            }

            if (c == 1) {
                v.push_front(a.front());
                a.pop_front();
            }
            if (c == 2) {
                v.push_back(a.front());
                a.pop_front();
            }
            if (c == 3) {
                v.push_front(a.back());
                a.pop_back();
            }
            if (c == 4) {
                v.push_back(a.back());
                a.pop_back();
            }
        }

        int sum = 0;
        for (int i = 0; i < v.size() - 1; ++i) {
            sum += abs(v[i+1] - v[i]);
        }
        cout << "Case " << k << ": " << sum << endl;
    }
    return 0;
}