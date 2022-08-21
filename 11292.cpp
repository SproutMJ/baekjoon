#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    while(1){
        int n;
        cin >> n;
        if(!n)break;

        vector<string> v;
        double flag = 0;
        for (int i=0; i<n; i++) {
            string s;
            double t;
            cin >> s >> t;
            if(t>flag){
                v.clear();
                v.push_back(s);
                flag = t;
            }else if(t == flag){
                v.push_back(s);
            }
        }

        for (const auto &i : v)
            cout << i << " ";
        cout << "\n";
    }
}