#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n>>m;
    vector<tuple<string, string, string>> v;

    while(n--){
        string a,b,c;
        cin >>a>>b>>c;
        v.push_back(make_tuple(a,b,c));
    }

    while(m--){
        string a,b,c;
        cin >> a>>b>>c;
        vector<tuple<string, string, string>> tmp;
        int ans = 0;
        for (const auto &i : v){
            if((a=="-"||a==get<0>(i))&&(b=="-"||b==get<1>(i))&&(c=="-"||c==get<2>(i))) ans++;
        }
        cout << ans << "\n";
    }
}