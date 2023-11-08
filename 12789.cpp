#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    deque<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }

    stack<int> s;
    for (int i = 1; i <= n; i++) {
        if (i != s.top() && i != v.front()) {
            cout << "Sad";
            return 0;
        }
        if (v.front() == i) {
            v.pop_front();
        }

    }
}