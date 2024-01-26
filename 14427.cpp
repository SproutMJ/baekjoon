#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> arr, tree;

int init(int node, int s, int e){
    if(s == e){
        return tree[node] = arr[s];
    }

    return tree[node] = min(init(node * 2, s, (s+e)/2), init(node*2 + 1, (s+e)/2+1, e));
}

int query(int node, int s, int e, int l, int r){
    if(e<l || r<s){
        return 2147483647;
    }

    if(s<=l && r<=e){
        return tree[node];
    }

    return min(query(node*2, s, (s+e)/2, l, r), query(node*2+1, (s+e)/2+1, e, l ,r));
}

void update(int node, int s, int e, int idx, int v){
    if(idx<s || idx>e){
        return;
    }

    if(s == e){
        tree[node] = v;
        return;
    }

    update(node*2, s, (s+e)/2, idx, v);
    update(node*2 + 1, (s+e)/2 + 1, e, idx, v);
    tree[node] = min(tree[node * 2], tree[node*2+1]);
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    arr.resize(n + 1);
    tree.resize(4 * n + 1);

    for(int i = 1; i<=n; i++){
        cin >> arr[i];
    }

    init(1, 1, n);

    int m;
    cin >> m;
    while(m--){
        int f;
        cin >> f;
        if(f == 1){
            int a, b;
            cin >> a >>b;
            arr[a] = b;
            update(1, 1, n, a, b);
        }else{
            int ans = 1;
            for(int i = 1; i<=n; i++){
                if(arr[i] == tree[1]){
                    break;
                }
                ans++;
            }
            cout << ans << endl;
        }
    }
}