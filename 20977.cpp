#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int j = 0, o = 0, i = 0;
    for (const auto &k: s)
        if (k == 'J')j++;
        else if (k == 'O')o++;
        else i++;

        for(int k = 0; k<j; k++)cout << 'J';
        for(int k = 0; k<o; k++)cout << 'O';
        for(int k = 0; k<i; k++)cout << 'I';
}