#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<long long> v(n);
    for(auto &i:v){
        cin >> i;
    }

    sort(v.begin(), v.end());

    int s = 0, e = n - 1;
    long long tmp = abs(v[s]+v[e]);
    pair<long long, long long> ans = {v[s], v[e]};
    while(s<e){
        if(abs(v[s]+v[e]) < tmp){
            tmp = abs(v[s]+v[e]);
            ans = {v[s],v[e]};
        }

        if(v[s]+v[e] < 0){
            s++;
        }else if(abs(v[s]+v[e]) > 0){
            e--;
        }else{
            break;
        }
    }

    cout << ans.first << " " << ans.second;
}