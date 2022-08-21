#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    while(n--){
        vector<int> v(5);
        for (auto &i : v)cin>>i;
        sort(v.begin(), v.end());
        if(abs(v[1]-v[3])>=4)cout << "KIN";
        else cout << v[1]+v[2]+v[3];
        cout << "\n";
    }
}