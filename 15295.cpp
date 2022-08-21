#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int c, n;
        cin>>c>>n;

        cout << c << " " << n*(n+1)/2+n << "\n";
    }
}