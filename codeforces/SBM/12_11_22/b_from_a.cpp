#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		long long ans = 1e18;
		for (int i = 0; i < 2; ++i) {
			int da = min(n, a - x);
			int db = min(n - da, b - y);
			ans = min(ans, (long long)((a - da)*(b - db)));
			swap(a, b);
			swap(x, y);
		}
		cout << ans << endl;
	}
	
	return 0;
}