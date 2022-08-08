#include <iostream>
#include <algorithm>
using namespace std;
char arr[5] = { 'a', 'e', 'i', 'o', 'u' };
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	int ans = 0;
	for (const auto &i :s)
		if(binary_search(begin(arr),end(arr), i)) ans++;
	cout << ans;
}