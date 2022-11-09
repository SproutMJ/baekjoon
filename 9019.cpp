#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

bool vi[10000];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int begin, end;
		cin >> begin >> end;
		memset(vi, false, sizeof(vi));

		queue<pair<int, string>> q;
		q.push({ begin, "" });
		vi[begin] = true;
		while (!q.empty()) {
			int command = q.front().first;
			string s = q.front().second;
			q.pop();

            if (command == end) {
                cout << s << "\n";
                break;
            }

            int cx = command * 2;
            if (cx > 9999) cx = cx % 10000;
            if (vi[cx] == false) {
                vi[cx] = true;
                q.push({ cx, s + "D" });
            }

            cx = command - 1;
            if (cx < 0) cx = 9999;
            if (vi[cx] == false) {
                vi[cx] = true;
                q.push({ cx, s + "S" });
            }

            cx = (command % 1000) * 10 + (command / 1000);
            if (vi[cx] == false) {
                vi[cx] = true;
                q.push({ cx, s + "L" });
            }

            cx = (command % 10) * 1000 + (command / 10);
            if (vi[cx] == false) {
                vi[cx] = true;
                q.push({ cx, s + "R" });
            }
		}
	}
}