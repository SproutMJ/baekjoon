#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a, b, c;
    while(cin >> a >> b >> c){
        cout << max(b-a, c - b) - 1 << "\n";
    }
}