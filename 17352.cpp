#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> bod;
int find(int a){
    if(bod[a] == a){
        return a;
    }
    return bod[a] = find(bod[a]);
}

void unite(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        bod[a] = b;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    bod.resize(n+1);
    for(int i = 1; i<=n; i++){
        bod[i] = i;
    }

    for(int i = 1; i<n-1; i++){
        int a, b;
        cin >> a>>b;
        unite(a, b);
    }

    for(int i = 2; i<=n; i++){
        if(find(1) != find(i)){
            cout << 1 << " " << i;
            return 0;
        }
    }
}