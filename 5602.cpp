#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,m;
    cin >> n >>m;
    vector<int> v(m);
    for (int i=0;i<n; i++)
        for (int j=0; j<m; j++){
            int t;
            cin >>t;
            v[j]+=t;
        }
    vector<pair<int, int>> pv;
    for (int j = 0; j < m; j++){
        pv.push_back({v[j], j+1});
    }

    sort(pv.begin(), pv.end(), [](auto l, auto r)->bool{
        if(l.first>r.first)return true;
        else if(l.first<r.first)return false;
        else {
           return l.second<r.second;
        }
    });
    for (const auto &i : pv)
        cout << i.second << " ";

}