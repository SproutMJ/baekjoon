#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int i = 1;
    while(1){
        string a,b;
        cin >> a >>b;
        if(a == "END"&&b=="END")break;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cout << "Case " << i++ << ": ";
        if(a == b)cout << "same\n";
        else cout <<"different\n";
    }
}