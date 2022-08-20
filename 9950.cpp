#include <iostream>
#include <queue>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    while (1) {
        int a, b, c;
        cin >> a >>b>>c;
        if(a+b+c==0)break;

        if(a == 0)cout << c/b << " " << b << " " << c;
        else if(b==0)cout << a << " " << c/a << " " << c;
        else cout << a << " " << b << " " << a*b;
        cout << "\n";
    }
}