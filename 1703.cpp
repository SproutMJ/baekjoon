#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    
    while (1) {
        int age = 0;
        vector <int> v;
        cin >> age;

        if (age == 0) break;

        v.resize(age * 2);

        int leaf = 1;
        for (int i = 0; i < 2 * age; i++) 
            cin >> v[i];

        for (int i = 0; i < age; i++) {
            int spl = v[i * 2];
            int ct = v[i * 2 + 1];

            leaf = leaf * spl - ct;
        }

        cout << leaf << "\n";
    }
}