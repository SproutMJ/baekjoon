#include <iostream>
#include <queue>
#include<stack>
#include <algorithm>

using namespace std;
vector<vector<int>> edge(5001);
vector<vector<int>> redge(5001);
vector<bool> vis(5001, false);
stack<int> st;
vector<int> tmp;

void dfs(int a) {
    vis[a] = true;
    for (const auto &e: edge[a]) {
        if (vis[e] == false) {
            dfs(e);
        }
    }
    st.push(a);
}

void ssc(int a) {
    vis[a] = true;
    tmp.push_back(a);
    for (const auto &e: redge[a]) {
        if (vis[e] == false) {
            ssc(e);
        }
    }
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    while (true) {
        int n, m;
        cin >> n;
        if (n == 0) {
            break;
        }
        cin >> m;

        fill(edge.begin() + 1, edge.begin() + n + 1, vector<int>());
        fill(redge.begin() + 1, redge.begin() + n + 1, vector<int>());
        while (m--) {
            int a, b;
            cin >> a >> b;
            edge[a].push_back(b);
            redge[b].push_back(a);
        }

        fill(vis.begin() + 1, vis.begin() + n + 1, false);
        for (int i = 1; i <= n; i++) {
            if (vis[i] == false) {
                dfs(i);
            }
        }

        fill(vis.begin() + 1, vis.begin() + n + 1, false);
        vector<vector<int>> sccc;
        while (!st.empty()) {
            int i = st.top();
            st.pop();
            if (vis[i] == false) {
                tmp.clear();
                ssc(i);
                sccc.push_back(tmp);
            }
        }

        vector<int> scccn(n + 1);;
        for (int i = 0; i < sccc.size(); i++) {
            for (const auto &j: sccc[i]) {
                scccn[j] = i;
            }
        }

        vector<int> ans;
        for (const auto &s: sccc) {
            bool flag = true;
            int num = scccn[s[0]];
            for (const auto &t: s) {
                for (const auto &e: edge[t]) {
                    if (scccn[e] != num) {
                        flag = false;
                        break;
                    }
                }
                if (flag == false) {
                    break;
                }
            }
            if (flag) {
                for (const auto &t: s) {
                    ans.push_back(t);
                }
            }
        }

        sort(ans.begin(), ans.end());
        for (const auto &a: ans) {
            cout << a << " ";
        }
        cout << endl;
    }
}