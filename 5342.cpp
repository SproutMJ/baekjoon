#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    map<string, double> mp;
    mp.insert({ "Paper", 57.99 });
    mp.insert({ "Printer", 120.50 });
    mp.insert({ "Planners", 31.25 });
    mp.insert({ "Binders", 22.50 });
    mp.insert({ "Calendar", 10.95 });
    mp.insert({ "Notebooks", 11.20 });
    mp.insert({ "Ink", 66.95 });

    double ans = 0;
    while (1) {
        string s;
        cin >> s;
        if (s == "EOI")
            break;
        ans += mp[s];
    }

    cout << "$" << ans;
}