#include <iostream>
#include <queue>
#include <algorithm>
#include<unordered_set>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<string> v(n);
        for(auto &i : v){
            cin >> i;
        }

        sort(v.begin(), v.end());

        bool flag = false;
        unordered_set<string> vis;
        for(int i = 0; i<v.size(); i++){
            string fix = "";
            for(int j = 0; j<v[i].length()-1; j++){
                fix+=v[i][j];
                if(vis.count(fix) != 0){
                    flag = true;
                    break;
                }
            }

            if(flag == false){
                vis.insert(v[i]);
            }
        }

        if(flag){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
}