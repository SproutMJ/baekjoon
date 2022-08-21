#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        if(((n/100)*(n/100)+(n%100)*(n%100))%7==1)cout << "YES\n";
        else cout << "NO\n";
    }
}