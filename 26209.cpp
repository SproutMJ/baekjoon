#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    string s = "S";
    for (int i = 0; i < 8; ++i) {
        int n;
        cin >>n;
        if (n == 9) {
            s = "F";
        }
    }

    cout << s;
}