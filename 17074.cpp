#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    vector<int> v(n+2);
    for (int i=1; i<=n; i++) cin >>v[i];
    v[0] = -987654321;
    v[n+1] = 987654321;

    int num = 0;
    int flag;
    for (int i=2; i<=n; i++){
        if(v[i-1]>v[i]){
            num++;
            flag = i;
        }
    }

    if(num == 0)cout << n;
    else if(num >= 2)cout << 0;
    else{
        int ans = 0;
        if(v[flag-2]<=v[flag])ans++;
        if(v[flag-1]<=v[flag+1])ans++;
        cout << ans;
    }
}