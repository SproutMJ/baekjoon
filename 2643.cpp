#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

bool check(pair<int, int> l, pair<int, int> r){
    if((l.first>=r.first&&l.second>=r.second) || (l.first>=r.second&&l.second>=r.first))
        return true;
    return false;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<pair<int, int>> paper(n);
    for(auto &i : paper){
        cin >> i.first >> i.second;
    }

    sort(paper.begin(), paper.end(), [](pair<int,int> l, pair<int,int> r)->bool{
        return l.first*l.second > r.first*r.second;
    });

    vector<int> ans(n, 1);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            if(check(paper[j], paper[i])){
                ans[i] = max(ans[i], ans[j]+1);
            }
        }
    }

    cout << *max_element(ans.begin(), ans.end());
}