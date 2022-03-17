#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<string, pair<string, int>> arr;
string find(string a) {
	if (arr[a].first == a) return a;
	else return arr[a].first = find(arr[a].first);
}
bool same(string a, string b) {
	return find(a) == find(b);
}
void unite(string a, string b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		if (arr[a].second > arr[b].second) {
			arr[b].first = a;
			arr[a].second += arr[b].second;
		}
		else {
			arr[a].first = b;
			arr[b].second += arr[a].second;
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		
		int friends;
		cin >> friends;
		for (int i = 0; i < friends; i++) {
			string a, b;
			cin >> a >> b;
			if (arr.find(a) == arr.end()) arr[a] = make_pair(a, 1);
			if (arr.find(b) == arr.end()) arr[b] = make_pair(b, 1);
			unite(a, b);
			cout << arr[find(a)].second << "\n";
		}
		arr.clear();
	}
}