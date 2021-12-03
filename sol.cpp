#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double s, a, b, c;
		cin >> s >> a >> b >> c;
		// if c is positive, then add the percentage, otherwise subtract it
		double x = (s * (abs(c) / 100));
		double val = (c >= 0 ? s + x : s - x);
		cout << (val >= a && val <= b ? "Yes" : "No") << '\n';
	}
	return 0;
}
