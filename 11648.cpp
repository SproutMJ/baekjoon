#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a;
    cin >> a;

    int cnt = 0, ans = 1;
    if (a < 10)cout << cnt;
    else {
        while (a >= 10) {
            while (a != 0) {
                ans *= a % 10;
                a = a / 10;
            }
            a = ans;
            ans = 1;
            cnt++;
        }
        cout << cnt;
    }
    return 0;
}