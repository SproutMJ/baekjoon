#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a>>b;
        if(a<12||b<4){
            cout << -1 << "\n";
            continue;
        }
        cout << b*11+4 << "\n";
    }

}