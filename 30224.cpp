#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    string s;
    cin >> s;
    bool contain = find(s.begin(), s.end(), '7') != s.end();
    bool divisible = stoi(s) % 7 == 0;

    if(contain && divisible)
        cout << 3;
    else if(contain && !divisible)
        cout << 2;
    else if(not(contain) && divisible)
        cout << 1;
    else
        cout << 0;
}