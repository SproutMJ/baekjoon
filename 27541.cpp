#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    cin >> s;
    if(*--s.cend() == 'G'){
        s.pop_back();
        cout << s;
        return 0;
    }

    cout << s + 'G';
}