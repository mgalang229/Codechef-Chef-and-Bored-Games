#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, ans = 0;
	cin >> n;
	for(n; n > 0; n -= 2) {
		ans += n * n;
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
