#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int idx = 1;
    while(1){
        int n;
        cin >> n;
        if(!n)break;
        cin.ignore();

        vector<string> v(n);
        for (auto &i : v)
            getline(cin, i);

        sort(v.begin(), v.end());

        cout << idx++ << "\n";
        for (const auto &i : v)
            cout << i << "\n";
    }
}