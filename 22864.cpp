#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a, b, c, m;
    cin >> a >>b >>c >>m;

    int ans = 0;
    int tmp = 0;
    for(int i = 0; i<24; i++){
        if (tmp + a <= m) {
            tmp += a;
            ans += b;
        }else{
            tmp -= c;
            if(tmp<0)
                tmp = 0;
        }
    }

    cout << ans;
}