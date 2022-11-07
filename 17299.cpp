#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
const int mx = 10000001;
int arr[mx], vi[mx], res[mx];
stack<pair<int, int>> st;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		vi[arr[i]]++;
	}


	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && vi[arr[i]] >= st.top().first) st.pop();

		res[i] = ((st.empty()) ? -1 : st.top().second);
		st.push({ vi[arr[i]], arr[i] });
	}

	for (int i = 0; i < n; i++)
		cout << res[i] << " ";
}