#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int visited[100001];
vector<int> v[100001];
int ti = 1;
void dfs(int st){
    visited[st] = ti++;
    sort(v[st].begin(), v[st].end());
    for (const auto &i : v[st]){
        if(visited[i]==0){
            dfs(i);
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int ver, ed, st;
    cin >> ver>>ed>>st;
    for (int i = 0; i<ed; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(st);

    for (int i=1; i<=ver; i++)
        cout << visited[i] << "\n";

}