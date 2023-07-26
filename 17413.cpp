#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    string ans;
    string s;
    getline(cin, s);
    while(!s.empty()) {
        if (s.front() == '<') {
            int index = s.find('>');
            ans += s.substr(0, index + 1);
            s = s.substr(index + 1);
        } else {
            int index = s.find('<');
            if (index != -1) {
                string t = s.substr(0, index);
                stringstream sst(t);
                string tt;
                while (sst >> tt) {
                    reverse(tt.begin(), tt.end());
                    ans += tt + ' ';
                }
                ans.pop_back();
                s = s.substr(index);
                continue;
            }
            index = s.find(' ');
            if (index != -1) {
                string t = s.substr(0, index);
                reverse(t.begin(), t.end());
                ans += t +' ';
                s = s.substr(index + 1);
                continue;
            }


            reverse(s.begin(), s.end());
            ans += s;
            s = "";
        }
    }
    cout << ans;
}
