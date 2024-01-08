#include <iostream>
#include <queue>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        list<char> li;
        auto iter = li.end();
        for (const auto &ch: s) {
            if (ch == '<') {
                if(iter != li.begin())
                    --iter;
            }
            else if (ch == '>') {
                if(iter != li.end())
                    ++iter;
            }
            else if (ch == '-') {
                if(li.size()>0) {
                    if (iter == li.end()) {
                        li.pop_back();
                        iter = li.end();
                    } else {
                        iter = li.erase(iter);
                    }
                }
            }else{
                iter = li.insert(iter, ch);
            }
        }

        for (const auto &i: li) {
            cout << i;
        }
        cout << '\n';
    }
}