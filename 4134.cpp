#include <iostream>
#include <queue>
#include <algorithm>
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19};
using namespace std;

bool isPrime(unsigned long long n) {
    if (n == 0 || n == 1)
        return false;
    for (const auto &i: prime) {
        if (n == i)
            return true;
    }
    for (const auto &i: prime) {
        if (n % i == 0)
            return false;
    }
    for (unsigned long long i = 3; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        unsigned long long a;
        cin >> a;

        while (!isPrime(a)) a++;
        cout << a << "\n";
    }
}