#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		string fun;
		cin >> fun;

		int n;
		cin >> n;

		string arr;
		cin >> arr;

		deque<int> dq;
		string temp;

		for (int i = 0; i < arr.length(); i++) {
			if (arr[i] == '[') continue;
			else if ('0' <= arr[i] && arr[i] <= '9') temp += arr[i];
			else if(arr[i] == ','||arr[i]==']')
				if (!temp.empty()) {
					dq.push_back(stoi(temp));
					temp.clear();
				}
		}

		bool flag = true;
		bool left = true;
		for (int i = 0; i < fun.length(); i++) {
			if (fun[i] == 'R') left = !left;
			else {
				if (dq.empty()) {
					flag = false;
					cout << "error\n";
					break;
				}
				else {
					if (left) dq.pop_front();
					else dq.pop_back();
				}
			}
		}

		if (flag) {
			if (left) {
				cout << '[';
				while (!dq.empty()) {
					cout << dq.front();
					dq.pop_front();
					if (!dq.empty()) cout << ',';
				}
				cout << "]\n";
			}
			else {
				cout << '[';
				while (!dq.empty()) {
					cout << dq.back();
					dq.pop_back();
					if (!dq.empty()) cout << ',';
				}
				cout << "]\n";
			}
		}
	}
}