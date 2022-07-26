#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int sum = 0;
    int n, t;
    cin  >> n;
    t = n;
    while(t--){
        int a;
        cin >> a;
        sum+=a;
    }
    cout << ((sum>n/2)?"Junhee is cute!":"Junhee is not cute!");
}