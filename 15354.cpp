#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, ans = 0;
    cin>>n;
    char ch = 0;
    while(n--){
        char t;
        cin >>t;
        if(t!=ch){
            ch = t;
            ans++;
        }
    }
    cout << ans+1;
}