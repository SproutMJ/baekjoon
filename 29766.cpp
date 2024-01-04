#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string s;
    cin >> s;
    int ans = 0;
    for (auto i = s.begin(); i < s.end() - 3; i++) {
        if (*i == 'D') {
            if(*(i+1) == 'K' &&*(i+2) == 'S' &&*(i+3) == 'H')
                ans++;
        }
    }

    cout << ans;
}