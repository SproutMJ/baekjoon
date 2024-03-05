#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;
    vector<int> v(n);
    for(auto &i : v){
        cin >> i;
    }

    sort(v.begin(), v.end());

    int s = 0, e = 0;
    int ans = 2147483647;
    while(e<v.size()){
        if(e == v.size() || s == v.size()){
            break;
        }

        if(abs(v[s] - v[e]) >= m){
            ans = min(ans, abs(v[s] - v[e]));
            s++;
        }else {
            e++;
        }
    }

    cout << ans;
}