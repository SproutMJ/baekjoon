#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<long long> tree, arr;
long long query(int n, int b, int e, int l, int r){
    if(e<l || r<b)return 0;
    if(l<=b && e<=r) return tree[n];

    return query(n*2, b, (b+e)/2, l, r) + query(n*2+1, (b+e)/2+1, e, l, r);
}
void update(int n, int b, int e, int i, long long d){
    if(i<b || i>e) return;
    tree[n]+=d;
    if(b == e) return;
    update(n*2, b, (b+e)/2, i, d);
    update(n*2 + 1, (b+e)/2+1, e, i, d);
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;

    arr.resize(n + 1, 0);
    tree.resize(4*n, 0);

    while(m--){
        long long a, b ,c;
        cin >> a >> b >>c;

        if(a == 1){
            update(1, 1, n, b, c);
        }else{
            cout << query(1, 1, n, b, c) << "\n";
        }
    }
}