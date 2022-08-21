#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cout<<fixed;
    cout.precision(3);

    int n;
    cin >>n;
    vector<double> v(n);
    for (auto &i : v)cin >>i;
    sort(v.begin(), v.end());

    for (int i=0; i<7; i++)
        cout << v[i] << "\n";
}