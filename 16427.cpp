#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, s;
    cin >> n >> s;
    int m = 0;
    for (int i = 0; i<n; i++){
        int t;
        cin >> t;
        m = max(m, t*s);
    }
    cout << m/1000+((m%1000)?1:0);
}