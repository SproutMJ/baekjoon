#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> arr(n+1), grade(n + 1), idg(n + 1, 0);

    for(int i = 1; i<=n; i++){
        int g, t;
        cin >> g >> t;
        grade[i] = g;
        for(int j = 1; j<=n; j++){
            if(g+1 == grade[j]){
                idg[j]++;
            }
        }
        arr[i] = t;
    }

    queue<int> q;
    for(int i = 1; i<=n; i++){
        if(idg[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(const auto &nxt: )
    }
}