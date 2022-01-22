#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bitset>
using namespace std;
int n, m;
vector<char> v;
bitset<16> b;
void f(int idx, int cnt, string ans) {
	if (cnt == n) {
		if (count_if(ans.begin(), ans.end(), [](const char& ch)->bool {
			return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; }) >= 1 &&
			count_if(ans.begin(), ans.end(), [](const char& ch)->bool {
			return !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'); }) >= 2) {
			cout << ans << "\n";
		}
		return;
	}
	if (idx == m)return;

	
	b[idx] = 1;
	f(idx + 1, cnt + 1, ans + v[idx]);
	
	b[idx] = 0;
	f(idx + 1, cnt, ans);

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	v.resize(m);
	for (auto& i : v)cin >> i;

	sort(v.begin(), v.end());
	b.set(0);
	f(0, 0, "");
}