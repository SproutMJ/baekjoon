#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int i = 1;
    while(true){
        int l, p, v;
        cin>>l>>p>>v;
        if(l==0 && p==0&&v==0){
            return 0;
        }

        int ans = 0;
        while(v>0){
            ans+=min(l, v);
            v-=p;
        }

        cout << "Case " <<i<<": "<<ans<<"\n";
        i++;
    }
}