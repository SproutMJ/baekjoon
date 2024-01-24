#include <iostream>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;
vector<int> v(41, 0);
int ans = 0;

int n, m;
set<int> fix;

//void f(int cnt) {
//    if (cnt == n) {
//        if(v[cnt-1] == 0 || v[cnt] == 0 || v[cnt] == cnt)
//            ans++;
//        return;
//    }
//
//    if (fix.count(cnt) != 0) {
//        f(cnt + 1);
//        return;
//    }
//
//    if (cnt - 1 >= 1 && v[cnt - 1] == 0) {
//        v[cnt-1] = cnt;
//        f(cnt + 1);
//        v[cnt-1] = 0;
//    }
//    if (v[cnt] == 0) {
//         v[cnt] = cnt;
//        f(cnt + 1);
//        v[cnt] = 0;
//    }
//    if (cnt + 1 <= n && v[cnt + 1] == 0) {
//        v[cnt+1] = cnt;
//        f(cnt + 1);
//        v[cnt+1] = 0;
//    }
//}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> m;

    while (m--) {
        int x;
        cin >> x;
        fix.insert(x);
        //v[x] = x;
    }

    vector<int> memo(n + 1, 0);
    memo[0] = 1;
    memo[1] = 1;
    for (int i = 2; i <= n; i++) {
        if(fix.find(i - 1) != fix.end()){
            memo[i] = memo[i - 1];
        }else if (fix.find(i) == fix.end()) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }else{
            memo[i] = memo[i - 1];
        }
    }

    cout << memo[n];
}