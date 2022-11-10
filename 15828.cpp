#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	queue<int> q;
	while (1) {
		int p;
		cin >> p;
		if (p == -1)break;
		else if (p == 0)q.pop();
		else {
			if (q.size() != n)
				q.push(p);
		}
	}

	if (q.empty()) cout << "empty";
	else {
		while (!q.empty()) {
			cout << q.front() << " ";
			q.pop();
		}
	}
}