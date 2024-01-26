#include <iostream>
#include <queue>
#include <algorithm>
#include<cmath>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cout << fixed;
    cout.precision(3);

    int n;
    cin >> n;
    vector<double> v(n);
    for(auto &i:v){
        cin >> i;
    }

    vector<double> ans(n, 0);
    ans[0] = v[0];
    for(int i = 1; i<n; i++){
        ans[i] = max(v[i], ans[i-1]*v[i]);
    }

    cout << floor((*max_element(ans.begin(), ans.end()) + 0.0005)*1000) / 1000.0;
    cout.unsetf(ios::fixed);
}