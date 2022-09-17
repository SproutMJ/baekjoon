#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a;
    string s, ss;
    cin >> s >>s >>ss;
    a = 0;
    for (int i=0; i<s.length(); i++){
        if(s[i]!=ss[i])a++;
    }

    cout << a;
}