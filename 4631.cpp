#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int i = 1;
    while(1){
        int n;
        cin >>n;
        if(!n)break;

        vector<string> v(n);
        for (auto &i : v)cin >>i;
        sort(v.begin(), v.end(), [](string a, string b)->bool{return a.length()<b.length();});

        cout << "SET " << i++ << "\n";
        vector<string> a,b;
        bool flag = true;
        for (const auto &i : v)
            if(flag){
                a.push_back(i);
                flag = !flag;
            }
            else {
                b.push_back(i);
                flag = !flag;
            }
        for (const auto &i : a)
            cout << i << "\n";
        for (vector<string>::reverse_iterator iter= b.rbegin(); iter!=b.rend(); iter++){
            cout << *iter << "\n";
        }
    }
}