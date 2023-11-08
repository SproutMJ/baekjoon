#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int k, l;
    cin >> k >> l;

    unordered_map<string, int> ump;
    vector<string> v(l);
    for (auto &i: v) {
        cin >> i;
        if (ump.find(i) == ump.end())
            ump[i] = 1;
        else
            ++ump[i];
    }

    vector<string> ans;
    for (const auto &i: v) {
        if (ump[i] == 1)
            ans.push_back(i);
        else
            --ump[i];
    }

    for (int i = 0; i < min(k, (int)ans.size()); ++i) {
        cout << ans[i] << "\n";
    }
}