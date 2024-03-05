#include <iostream>
#include <queue>
#include <algorithm>
#include<unordered_map>
#include<set>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n>> m;

    unordered_map<string, set<string>> group;
    unordered_map<string, string> team;

    while(n--){
        string tname;
        cin >> tname;
        int tnum;
        cin >> tnum;
        group[tname] = set<string>();
        while(tnum--){
            string player;
            cin >> player;
            group[tname].insert(player);
            team[player] = tname;
        }
    }

    while(m--){
        string name;
        int type;
        cin >> name >> type;
        if(type == 0){
            for(const auto &player: group[name]){
                cout << player << "\n";
            }
        }else{
            cout << team[name] << "\n";
        }
    }
}