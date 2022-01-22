#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	deque<pair<int, int>> d(n);

	for (deque<pair<int, int>>::size_type i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		d[i - 1] = make_pair(i, tmp);
	}

	while (true) {
		cout << d.front().first << ' ';
		int next = d.front().second;
		d.pop_front();

		if (d.empty()) break;

		if (next > 0) {
			for (int i = next; i > 1; i--) {
				d.push_back(d.front());
				d.pop_front();
			}
		}
		else {
			for (int i = next; i < 0; i++) {
				d.push_front(d.back());
				d.pop_back();
			}
		}
	}
}