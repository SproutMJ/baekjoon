#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n = 9;
    int t = 0, l = 0;
    while(n--){
        string s;
        cin >> s;
        ((s[0]=='T')?++t:++l);
    }
    cout << ((t>=5)?"Tiger":"Lion");
}