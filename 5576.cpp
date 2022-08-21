#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    vector<int> w(10), k(10);
    for (auto &i : w)cin >>i;
    for (auto &i : k)cin >>i;
    sort(w.begin(), w.end());
    sort(k.begin(), k.end());

    cout << w[9]+w[8]+w[7] << " " << k[9]+k[8]+k[7];
}