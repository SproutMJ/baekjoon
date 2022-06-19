#include <iostream>
using namespace std;
const int MAX = 12;
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;
    char result[MAX] = { 'A', 'B', 'C', 'B', 'C', 'D', 'C', 'D', 'A', 'D', 'A', 'B' };
    while(x--) {
        int n;
        cin >> n;
        
        cout << result[(n - 1) % MAX] << "\n";
    }
}
