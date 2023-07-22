#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int f(int a){
    if(a == 0) {
        return 1;
    }
    int ans = 0;
    while (true) {
        if (a % 10 == 0) {
            ans++;
        }
        a /= 10;
        if(a == 0) return ans;
    }
    return ans;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        int a,b;
        cin >> a>>b;
        int ans = 0;
        for (int i = a; i <= b; i++) {
            ans += f(i);
        }
        cout << ans << "\n";
    }
}