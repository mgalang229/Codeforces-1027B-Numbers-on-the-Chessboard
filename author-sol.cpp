#include <bits/stdc++.h>
using namespace std;

void test_cases() {
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < q; i++) {
		long long x, y;
		cin >> x >> y;
		long long cnt = (x - 1) * 1LL * n + y;
		long long ans = (cnt + 1) / 2;
		if ((x + y) % 2 == 1) {
			ans += (n * 1LL * n + 1) / 2;
		}
		cout << ans << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	//cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
