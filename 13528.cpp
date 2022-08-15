#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    cout << fixed;
    cin.precision(8);

    double p, n, ans = 0;
    cin >> p>> n;

    while(n--){
        double a, b;
        cin >> a >>b;
        ans+=a*b;
    }

    cout << ans*p;
}