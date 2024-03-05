#include <iostream>
#include <queue>
#include <algorithm>
#include<unordered_map>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i :v){
        cin >> i;
    }

    for(int i = 0; i<n; i++){

    }
    unordered_map<int, int> mp;
    int s=0, e = 0;
    mp[v[0]] = 1;

    long long ans = 1;
    while(e<v.size()){
        e++;
        if(e == v.size() || s == v.size()){
            break;
        }

        if(mp.count(v[e]) == 0){
            mp[v[e]] = 1;
        }else{
            mp[v[e]]++;
        }

        if(mp[v[e]] == 2){
            while(s<e){
                if(mp[v[s]] == 2){
                    mp[v[s]]--;
                    s++;
                    break;
                }
                mp[v[s]]--;
                s++;
            }
        }else{
        }
        ans+=(e-s+1);
    }

    cout << ans;
}