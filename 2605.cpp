#include <iostream>
#include <queue>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    list<int> li;

    for(int i = 1; i<= n; i++) {
        int x;
        cin >> x;
        auto iter = li.end();
        while (x--) {
            iter--;
        }
        li.insert(iter, i);
    }

    for (const auto &i: li) {
        cout << i << " ";
    }
}