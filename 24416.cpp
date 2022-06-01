#include <iostream>
#include <queue>
using namespace std;

int a, b;
long long fib(long long n) {
    if (n == 1 || n == 2) {
        a++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}

long long f[41];
long long fibonacci(long long n) {
    if (n == 0)return 0;
    if (n == 1)return 1;
    if (n == 2)return 1;
    for (int i = 3; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
        b++;
    }
    return f[n];
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << a << " " << b;
}