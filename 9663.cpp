#include <iostream>
#include <queue>
#include <algorithm>
int ar[15];
int ans, n;
bool check(int cnt) {
	for (int i = 0; i < cnt; i++) 
		if(ar[cnt] == ar[i] || abs(cnt-i) == abs(ar[i]-ar[cnt]))
			return false;
	return true;
}
void bt(int cnt) {
	if (cnt == n) {
		ans++;
		return;
	}

	for (int i = 0; i < n; i++) {
		ar[cnt] = i;
		if (check(cnt))
			bt(cnt + 1);
	}
}
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n;
	bt(0);
	cout << ans;
}