#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
vi getPi(const vi& v) {
	int m = v.size();
	vi pi(m, 0);
	int begin = 1, match = 0;
	while (begin + match < m) {
		if (v[begin + match] == v[match]) {
			match++;
			pi[begin + match - 1] = match;
		}
		else {
			if (match == 0) {
				begin++;
			}
			else {
				begin += match - pi[match - 1];
				match = pi[match - 1];
			}
		}
	}
	return pi;
}
int kmp(const vi& H, const vi& N) {
	int n = H.size(), m = N.size();
	int cnt = 0;;
	vi pi = getPi(N);
	int begin = 0, match = 0;
	while (begin <= n - m) {
		if (match < m && H[begin + match] == N[match]) {
			match++;
			if (match == m) cnt++;
		}
		else {
			if (match == 0) {
				begin++;
			}
			else {
				begin += match - pi[match - 1];
				match = pi[match - 1];
			}
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n, k;
	cin >> t;
	for (int j = 1; j <= t; j++) {
		cin >> n >> k;
		vi arr(n);
		for (int i = 0; i < n; i++)cin >> arr[i];
		vi N;
		for (int i = k; i > 0; i--) {
			N.push_back(i);
		}
		cout << "Case #" << j << ": " << kmp(arr,N) << "\n";
	}

	
}