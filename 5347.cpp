#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

unsigned long long  gcd(unsigned long long  a, unsigned long long  b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    unsigned long long x;
    cin >> x;
    while(x--){
        unsigned long long  a, b;
        cin >> a >>b;
        cout << (a*b)/gcd(a, b) << "\n";
    }
}