#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, w, l;
    cin >> n >> w >> l;

    queue<unsigned char> v;
    while (n--) {
        int i;
        cin >> i;
        v.push(i);
    }

    queue<unsigned char> bridge;
    int cl = w;
    while(cl--) {
        bridge.push(0);
    }
    int ans = 0;
    int sum = 0;
    while (!v.empty()) {
        ans++;
        if (bridge.size() == w) {
            sum -= bridge.front();
            bridge.pop();
        }
        if (sum + v.front() <= l) {
            bridge.push(v.front());
            sum += v.front();
            v.pop();
        } else {
            bridge.push(0);
        }
    }

    cout << ans + bridge.size();
}