#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int cnt = 0;
bool recur(string s){
    cnt++;
    if(s == "" || s.length() == 1) return 1;
    return s.front() == s.back() && recur(s.substr(1, s.length() - 2));
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    vector<string> v(n);
    for (auto &i: v){
        cin >> i;
        cnt = 0;
        cout << recur(i) << " " << cnt << "\n";
    }



}