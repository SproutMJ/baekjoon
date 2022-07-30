#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n,m;
    cin >> n >>m;

    int idx = 1;
    for (int i=0; i<n; i++){
        for (int j = 0; j<m; j++){
            if(m-1 == j)
                cout << idx++;
            else
                cout << idx++ << " ";
        }
        cout << "\n";
    }
}