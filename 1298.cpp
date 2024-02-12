#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> adj[101];
vector<int> student(101, -1), note(101, -1);
vector<int> vis(101);
bool dfs(int stu){
    vis[stu] = true;

    for(const auto &no: adj[stu]){
        if(note[no] == -1 || vis[note[no]] == false &&dfs(note[no])){
            note[no] = stu;
            student[stu] = no;
            return true;
        }
    }

    return false;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >>n >> m;

    while(m--){
        int a, b;
        cin >> a >>b;
        adj[a].push_back(b);
    }

    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(student[i] == -1){
            fill(vis.begin(), vis.begin()+1+n, false);
            if(dfs(i)){
                ans++;
            }
        }
    }

    cout << ans;
}