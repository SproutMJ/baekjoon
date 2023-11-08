#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n%14 == 0) {
        cout << "C";
        return 0;
    }
    const string s = "WelcomeToSMUPC";
    cout << s[(n) % 14 - 1];
}