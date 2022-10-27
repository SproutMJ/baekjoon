#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i :v)cin >> i.first >> i.second;
    sort(v.begin(), v.end());

    int begin, end;
    begin = end = -1000000010;
    int len = 0;
    bool flag = true;
    for (const auto &i :v)
        if(end>=i.first){
            end = max(end, i.second);
            flag = false;
        }
        else{
            len+=(end-begin);
            begin = i.first;
            end = i.second;
            flag = true;
        }

    len+=(end-begin);
    cout << len;

}