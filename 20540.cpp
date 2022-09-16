#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string s, ans;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'E') ans += 'I';
        else if(s[i] == 'I') ans += 'E';
        else if(s[i] == 'S') ans += 'N';
        else if(s[i] == 'N') ans += 'S';
        else if(s[i] == 'T') ans += 'F';
        else if(s[i] == 'F') ans += 'T';
        else if(s[i] == 'P') ans += 'J';
        else ans += 'P';
    }
    cout << ans;
}