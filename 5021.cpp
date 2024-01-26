#include <iostream>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    string start;
    cin >> start;

    map<string, vector<string>> grap;
    map<string, int> ind;
    while(n--){
        string a, b, c;
        cin >> a >>b >>c;

        if(grap.count(b) == 0){
            grap[b] = vector<string>();
        }
        if(grap.count(c) == 0){
            grap[c] = vector<string>();
        }

        grap[b].push_back(a);
        grap[c].push_back(a);
        if(ind.count(a) == 0){
            ind[a] = 1;
        }else{
            ind[a]++;
        }
    }

    vector<string> seq;
    queue<string> q;
    q.push(start);
    while(!q.empty()){
        string now = q.front();
        q.pop();

        for(const auto &i: grap[now]){
            ind[i]--;
            if(ind[i] == 0){
                q.push(i);
                seq.push_back(i);
            }
        }
    }

    priority_queue<pair<int, string>> pq;
    while(m--){
        string s;
        cin >> s;

        int num = find(seq.begin(), seq.end(), s) - seq.begin();
        pq.push({-num, s});
    }

    cout << pq.top().second;
}