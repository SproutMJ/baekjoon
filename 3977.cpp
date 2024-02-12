#include <iostream>
#include <queue>
#include <algorithm>
#include<stack>
using namespace std;
vector<vector<int>> edge(100000, vector<int>()), redge(100000);
vector<bool> vis(100000);
stack<int> st;
vector<int> tmp;
vector<vector<int>> ssc;

void dfs(int a){
    vis[a] = true;

    for(const auto &e: edge[a]){
        if(vis[e] == false){
            dfs(e);
        }
    }

    st.push(a);
}

void rdfs(int a){
    vis[a] = true;
    tmp.push_back(a);
    for(const auto &e: redge[a]){
        if(vis[e] == false){
            rdfs(e);
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >>n >> m;

        for(int i = 0; i<n; i++){
            edge[i].clear();
            redge[i].clear();
        }
        while(m--){
            int a, b;
            cin >> a >>b;
            edge[a].push_back(b);
            redge[b].push_back(a);
        }

        fill(vis.begin(), vis.begin()+n, false);
        for(int i = 0; i<n; i++){
            if(vis[i] == false){
                dfs(i);
            }
        }

        fill(vis.begin(), vis.begin()+n , false);

        ssc.clear();
        while(!st.empty()){
            int i = st.top();
            st.pop();

            if(vis[i] == false){
                tmp.clear();
                rdfs(i);
                ssc.push_back(tmp);
            }
        }

        vector<int> sccn(n);
        for(int i = 0; i<ssc.size(); i++){
            for(const auto &j: ssc[i]){
                sccn[j] = i;
            }
        }

        vector<int> ans;
        for(int i = 0; i<ssc.size(); i++) {
            bool flag = true;
            for(const auto &j: ssc[i]){
                for(const auto &e: redge[j]){
                    if(sccn[e] != sccn[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag == false){
                    break;
                }
            }
            if(flag){
                if(!ans.empty()){
                    ans.clear();
                    break;
                }
                for(const auto &j: ssc[i]){
                    ans.push_back(j);
                }
            }
        }

        sort(ans.begin(), ans.end());
        if(!ans.empty()){
            for(const auto &i: ans){
                cout << i << "\n";
            }
        }else{
            cout << "Confused\n";
        }
        cout << "\n";
    }
}