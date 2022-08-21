#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    while(1){
        int n;
        cin >>n;
        if(!n)break;
        for (int i=1; i<=n; i++){
            for (int j=0; j<i; j++)
                cout << "*";
            cout << "\n";
        }
    }
}