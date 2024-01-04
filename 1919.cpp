#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string s, ss;
    cin  >>s >>ss;

    map<char, int> sm, ssm;
    for (const auto &ch: s) {
        if (sm.count(ch) == 0) {
            sm[ch] = 1;
        } else {
            sm[ch]++;
        }
    }

    for (const auto &ch: ss) {
        if (ssm.count(ch) == 0) {
            ssm[ch] = 1;
        } else {
            ssm[ch]++;
        }
    }

    for (const auto &ch: sm) {
        if (ssm.count(ch.first) > 0) {
            int tmp = min(sm[ch.first], ssm[ch.first]);
            sm[ch.first] -= tmp;
            ssm[ch.first] -= tmp;
        }
    }

    int ans = 0;
    for (const auto &ch: sm) {
        ans += ch.second;
    }

    for (const auto &ch: ssm) {
        ans += ch.second;
    }

    cout << ans;
}