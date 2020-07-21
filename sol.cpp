#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i <= n / 2; ++i) {
		ans += ((n - (2 * i)) * (n - (2 * i)));
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
