#include <iostream>
#include <queue>
#include <algorithm>
#include<set>
using namespace std;
typedef pair<int, int> pii;
string s;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    pii start;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            char ch;
            cin>>ch;
            if(ch == '0'){
                start = {i, j};
            }
            s+=ch;
        }
    }

    set<string> vis;
    const string dest = "123456780";
    queue<tuple<string, int, pii>> q;
    q.push({s, 0, start});
    while(!q.empty()){
        auto [now, cnt, zero] = q.front();
        q.pop();
        if(dest == now){
            cout << cnt;
            return 0;
        }

        const pii diff[4] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for(const auto &d: diff){
            int rr = zero.first+d.first;
            int cc = zero.second+d.second;

            int zeroi = zero.first*3+zero.second;
            int ci = rr*3+cc;
            string copy = now;
            char tmp = copy[zeroi];
            copy[zeroi] = copy[ci];
            copy[ci] = tmp;
            if(rr<0 || rr>=3 || cc<0 || cc>=3 || vis.count(copy) != 0){
                continue;
            }

            vis.insert(copy);
            q.push({copy, cnt+1, {rr, cc}});
        }
    }

    cout << -1;
}