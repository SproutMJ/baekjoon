#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<unsigned long long> arr, tree;
unsigned long long init(int n, int b, int e){
    if(b == e) return tree[n] = arr[b];

    int mid = (b+e)/2;
    return tree[n] = (init(n * 2, b, mid) + init(n *2+1, mid+1, e));
}

unsigned long long query(int n, int b, int e, int l, int r){
    if(e<l || r<b) return 0;
    if(l<=b && e <= r) return tree[n];

    int mid = (b+e)/2;
    return query(n*2, b, mid, l, r) + query(n*2+1, mid+1, e, l, r);
}

void update(int n, int b, int e, int i, unsigned long long d){
    if(i<b || e < i) return;
    tree[n] += d;
    if(b == e)return;
    int mid = (b+e)/2;
    update(n*2, b, mid, i, d);
    update(n*2 + 1, mid+1, e, i, d);
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    arr.resize(n + 1, 0);
    tree.resize(4*n, 0);

    while(m--){
        unsigned long long a, b, c;
        cin >> a >>b >>c;
        if(a == 0){
            int l = min(c, b);
            int r = max(c, b);
            cout << query(1, 1, n, l, r) << "\n";
        }else{
            unsigned long long diff = c - arr[b];
            arr[b] = c;
            update(1,1,n,b,diff);
        }
    }
}