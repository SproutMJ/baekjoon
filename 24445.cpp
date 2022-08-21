#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int visited[100001];
vector<int> v[100001];
queue<int> q;
int ti = 1, st;
void bfs(){
    q.push(st);
    visited[st] = ti++;

    while(!q.empty()){
        int nxt = q.front();
        q.pop();

        for(const auto &i :v[nxt])
            if(visited[i]==0){
                visited[i] = ti++;
                q.push(i);
            }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int ver, ed;
    cin >> ver>>ed>>st;
    for (int i = 0; i<ed; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(auto &i : v)
        sort(i.begin(), i.end(), greater<int>());

    bfs();

    for (int i=1; i<=ver; i++)
        cout << visited[i] << "\n";

}