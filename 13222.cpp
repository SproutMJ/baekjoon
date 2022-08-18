#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t, a,b;
    cin >>t >> a >>b;
    while(t--){
        int i;
        cin >> i;
        if(i*i<=a*a+b*b)cout << "YES\n";
        else cout << "NO\n";
    }
}
