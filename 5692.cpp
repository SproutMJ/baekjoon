#include <iostream>
using namespace std;

int f(int num) {
    int tmp = 1;
    for (int i = 1; i <= num; i++)
        tmp *= i;
    return tmp;
}

int fn(int num) {
    int tmp = num, sum = 0, cnt = 1;
    while (tmp) {
        sum += tmp % 10 * f(cnt++);
        tmp /= 10;
    }
    return sum;
}

int main() {
    while (1) {
        int n, ans = 0;
        cin >> n;
        if (!n) break;
        cout << fn(n) << '\n';
    }
}