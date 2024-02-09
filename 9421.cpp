#include <iostream>
#include <queue>
#include <algorithm>
#include<cmath>
#include<set>
using namespace std;
bool prime[1000000+1];
set<string> vis, memo;
bool fun(string s){
    if(vis.count(s)){
        return false;
    }
    vis.insert(s);
    int tmp = 0;
    for(const auto &ch: s){
        int k = (ch-'0');
        tmp+=k*k;
    }
    if(memo.count(s) != 0 || tmp == 1){
        return true;
    }

    if(fun(to_string(tmp))){
        memo.insert(s);
        return true;
    }else{
        return false;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    fill(prime, prime + 1000000 + 1, true);
    //cout << prime[1000000];
    prime[0] = prime[1] = false;
    for(int i = 2; i<=sqrt(1000000+1); i++){
        if(prime[i]){
            for(int j = i*2; j<=1000000; j+=i){
                prime[j] = false;
            }
        }
    }

    int n;
    cin >> n;
    for(int i = 2; i<=n; i++){
        if(prime[i] && fun(to_string(i))){
            vis.clear();
            cout << i << "\n";
        }
    }
}