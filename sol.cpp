#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, k;
	cin >> n >> k;
	long long mid = n / 2;
	if (n % 2 == 1) {
		mid++;
	}
	if (k <= mid) {
		cout << (2 * k - 1);
	} else {
		cout << (k - mid) * 2;
	}
	cout << '\n';
	return 0;
}
