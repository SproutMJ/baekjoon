#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    while(1){
        string n;
        int a, w;
        cin >> n>>a>>w;

        if(n=="#"&&a==0&&w==0)break;

        if(a>17||w>=80)cout << n << " Senior\n";
        else cout << n << " Junior\n";
    }
}