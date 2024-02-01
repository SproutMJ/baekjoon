#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    vector<pair<int, char>> v(3);
    vector<int> yv(3);
    for(int i = 0; i<3; i++){
        int p, y;
        string name;
        cin >> p >> y >> name;
        yv[i] = y%100;
        v[i] = {p, name[0]};
    }

    sort(yv.begin(), yv.end());
    for(const auto &i :yv){
        cout << i;
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<>());
    for(const auto &i :v){
        cout << i.second;
    }
}