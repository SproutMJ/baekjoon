#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cout << "Case #" << i << ": ";
        int a, b;
        cin >> a >>b;
        if(b<45) {
            if (a == 0) a = 23;
            else a--;
            b+=15;
        }else{
            b-=45;
        }

        cout << a << " " << b << "\n";
    }

}