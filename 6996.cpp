#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin>>n;
    while(n--){
        string a,b, c, d;
        cin >> a>>b;
        c = a;
        d = b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cout  << c << " & " << d;
        if(a==b)cout<<" are anagrams.\n";
        else cout <<" are NOT anagrams.\n";
    }
}