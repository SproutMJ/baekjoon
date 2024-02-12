#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> adj[1001];
vector<int> book(1001);
vector<int> student(1001);
vector<bool> vis(1001);
bool dfs(int stu){
    vis[stu] = true;

    for(const auto &b: adj[stu]){
        if(book[b] == -1 ||(vis[book[b]] == false&& dfs(book[b]))){
            book[b] = stu;
            student[stu] = b;
            return true;
        }
    }

    return false;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        for(int i = 1; i<=n; i++){
            int a, b;
            cin >> a >>b;
            adj[i].clear();
            for(int j = a; j<=b; j++){
                adj[i].push_back(j);
            }
        }

        int ans = 0;
        fill(book.begin(), book.begin()+1+m, -1);
        fill(student.begin(), student.begin()+1+n, -1);
        for(int i = 1; i<=n; i++){
            fill(vis.begin(), vis.begin()+1+n, false);
            if(student[i] == -1){
                if(dfs(i)){
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }
}