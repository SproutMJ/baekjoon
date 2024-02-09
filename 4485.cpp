#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int bod[125][125];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int idx = 1;
    while(true){
        int n;
        cin >> n;

        if(n == 0){
            break;
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cin >> bod[i][j];
            }
        }

        priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, greater<>> pq;
        pq.push({{0, 0,}, bod[0][0]});
        int dis[125][125];
        int lim = (1<<31)-1;
        fill(&dis[0][0], &dis[0][0]+125*125, lim);

        while(!pq.empty()){
            auto[pos, cost] = pq.top();
            pq.pop();
            auto[r,c] = pos;

            if(dis[r][c] < cost){
                continue;
            }

            const pair<int, int> diff[4] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
            for(const auto &d: diff){
                int rr = r+d.first;
                int cc = c+d.second;

                if(rr<0 || rr>=n || cc<0||cc>=n){
                    continue;
                }

                if(dis[rr][cc] > cost + bod[rr][cc]){
                    dis[rr][cc] = cost + bod[rr][cc];
                    pq.push({{rr, cc}, cost + bod[rr][cc]});
                }
            }
        }

        cout << "Problem " << idx << ": " << dis[n-1][n-1] << "\n";
        idx++;
    }
}