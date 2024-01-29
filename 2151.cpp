#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<string> v(n);
    for(auto &i: v){
        cin >> i;
    }

    pair<int, int> d1 = {-1, -1}, d2 = {-1, -1};
    for(int i = 0; i<n; i++){
        bool flag = false;
        for(int j = 0; j<n; j++){
            if(v[i][j] == '#'){
                if(d1.first == -1){
                    d1 = {i, j};
                }else{
                    d2 = {i, j};
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            break;
        }
    }

    priority_queue<tuple<int, pair<int, int>, int>, vector<tuple<int, pair<int, int>, int>>, greater<>> pq;
    vector<vector<int>> dis(n, vector<int>(n, 2147483647));
    dis[d1.first][d1.second] = 0;
    pq.push({0, {d1.first, d1.second}, 0});
    pq.push({0, {d1.first, d1.second}, 1});
    while(!pq.empty()){
        auto [cnt, pos, direct] = pq.top();
        pq.pop();

        if(dis[pos.first][pos.second] < cnt){
            continue;
        }

        if(direct == 0) {
            for(int i = pos.second - 1; i >= 0; i--){
                if(v[pos.first][i] == '*'){
                    break;
                }else if(v[pos.first][i] == '!'){
                    if(dis[pos.first][i] > cnt + 1){
                        dis[pos.first][i] = cnt + 1;
                        pq.push({cnt + 1, {pos.first, i}, 1});
                    }
                }else if(v[pos.first][i] == '#'){
                    dis[pos.first][i] = min(dis[pos.first][i], cnt);
                }
            }
            for(int i = pos.second + 1; i < n; i++){
                if(v[pos.first][i] == '*'){
                    break;
                }else if(v[pos.first][i] == '!'){
                    if(dis[pos.first][i] > cnt + 1){
                        dis[pos.first][i] = cnt + 1;
                        pq.push({cnt + 1, {pos.first, i}, 1});
                    }
                }else if(v[pos.first][i] == '#'){
                    dis[pos.first][i] = min(dis[pos.first][i], cnt);
                }
            }
        }else{
            for(int i = pos.first - 1; i >= 0; i--){
                if(v[i][pos.second] == '*'){
                    break;
                }else if(v[i][pos.second] == '!'){
                    if(dis[i][pos.second] > cnt + 1){
                        dis[i][pos.second] = cnt + 1;
                        pq.push({cnt + 1, {i, pos.second}, 0});
                    }
                }else if(v[i][pos.second] == '#'){
                    dis[i][pos.second] = min(dis[i][pos.second], cnt);
                }
            }
            for(int i = pos.first + 1; i < n; i++){
                if(v[i][pos.second] == '*'){
                    break;
                }else if(v[i][pos.second] == '!'){
                    if(dis[i][pos.second] > cnt + 1){
                        dis[i][pos.second] = cnt + 1;
                        pq.push({cnt + 1, {i, pos.second}, 0});
                    }
                }else if(v[i][pos.second] == '#'){
                    dis[i][pos.second] = min(dis[i][pos.second], cnt);
                }
            }
        }
    }

    cout << dis[d2.first][d2.second];
}