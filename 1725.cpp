#include <iostream>
#include <queue>
#include <stack>

using namespace std;
int arr[100001];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, ans = 0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> arr[i];
    }
    stack<int> s;
    s.push(0);
    for(int i = 1; i<=n+1; i++){
        while(!s.empty() && arr[s.top()]>arr[i]){
            int hi = s.top();
            s.pop();
            ans = max(ans, arr[hi]*(i-s.top() - 1));
        }
        s.push(i);
    }

    cout << ans;
}