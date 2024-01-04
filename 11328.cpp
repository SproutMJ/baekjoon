#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        string s, ss;
        cin >> s >> ss;

        map<char, int> chars;
        for (const auto &ch: s) {
            if (chars.count(ch) == 0) {
                chars[ch] = 1;
            }else{
                chars[ch]++;
            }
        }

        map<char, int> charss;
        for (const auto &ch: ss) {
            if (charss.count(ch) == 0) {
                charss[ch] = 1;
            }else{
                charss[ch]++;
            }
        }

        bool flag = true;
        if(chars.size() != charss.size()) {
            flag = false;
        }

        for (const auto &ch: chars) {
            if (chars[ch.first] != charss[ch.first]) {
                flag = false;
            }
        }

        for (const auto &ch: charss) {
            if (chars[ch.first] != charss[ch.first]) {
                flag = false;
            }
        }

        if (flag) {
            cout << "Possible\n";
        }else{
            cout << "Impossible\n";
        }
    }
}