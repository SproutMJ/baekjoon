#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int arr[100000+1];
long long tree[4*(100000+1)];
long long init(int node, int nl, int nr){
    if(nl == nr){
        return tree[node] = arr[nl];
    }

    int mid = (nl+nr)/2;
    return tree[node] = init(node*2, nl, mid) + init(node*2+1, mid+1, nr);
}
void update(int node, int nl, int nr, int idx, int val){
    if(idx<nl || nr<idx){
        return;
    }
    if(nl == nr){
        tree[node] = val;
        return;
    }
    int mid = (nl+nr)/2;
    update(node*2, nl, mid, idx, val);
    update(node*2+1, mid+1, nr, idx, val);
    tree[node] = tree[node*2]+tree[node*2+1];
}
long long query(int node, int nl, int nr, int l, int r){
    if(nr<l || r<nl){
        return 0;
    }
    if(l<=nl && nr<=r){
        return tree[node];
    }
    int mid = (nl+nr)/2;
    return query(node*2, nl, mid, l, r)+query(node*2+1, mid+1, nr, l, r);
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, q;
    cin >> n >> q;

    for(int i = 1; i<=n; i++){
        cin >> arr[i];
    }
    init(1, 1, n);

    while(q--){
        int x, y, a, b;
        cin >> x >> y >> a >>b;

        if(x>y){
            x^=y;
            y^=x;
            x^=y;
        }
        cout << query(1, 1, n, x, y) << "\n";
        update(1, 1, n, a, b);
    }
}