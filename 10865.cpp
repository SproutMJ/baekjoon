#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    while(m--){
        int a,b;
        cin >> a>>b;
        v[a-1]++;
        v[b-1]++;
    }

    for (const auto &i : v)
        cout << i << "\n";
}