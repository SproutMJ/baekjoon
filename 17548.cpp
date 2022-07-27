#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string s;
    cin >> s;

    cout << "h";
    for (int i=0; i<(s.length()-2)*2; i++) cout << "e";
    cout << "y";
}