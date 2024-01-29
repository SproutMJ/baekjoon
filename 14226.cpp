#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int dp[2001][2001];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    fill(&dp[0][0], &dp[0][0] + 2001*2001, 987654321);

    queue<pair<int, int>> q;
    q.push({1, 0});

    dp[1][0] = 0;
    while(!q.empty()){
        auto [len, clip] = q.front();
        q.pop();

        for(int i = 0; i<3; i++){
            int nclip = clip, nlen = len;
            if(i == 0){
                nclip = len;
            }else if(i == 1){
                nlen = (len+clip);
            }else{
                nlen--;
            }

            if(nlen>=0 && nclip>=0&&nlen<=n&&nclip<=n&&dp[nlen][nclip] > dp[len][clip] + 1){
                dp[nlen][nclip] = (dp[len][clip]+1);
                q.push({nlen, nclip});
            }
        }
    }

    cout << *min_element(&dp[n][0], &dp[n][0] + 2001);
}