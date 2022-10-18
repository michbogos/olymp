#include <iostream>
#include <stack>

using namespace std;

struct Bar
{
	int x, Height;
	Bar(int x, int Height) : x(x), Height(Height) {};
};

stack<Bar> s;

int main() {
	int h, n, i;
	long res;
	scanf("%d", &n);
	s.push(Bar(0, 0));
	for (res = 0, i = 1; i <= n + 1; i++)
	{
		if (i <= n) scanf("%d", &h);
		else h = 0;
		int x = i;
		while (h < s.top().Height)
		{
			x = s.top().x;
			int Height = s.top().Height;
			s.pop();
			long area = 1L * Height * (i - x);
			if (area > res) res = area;
		}
		if (h > s.top().Height) s.push(Bar(x, h));
	}
	printf("%ld\n", res);
	return 0;
}