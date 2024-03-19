#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int x;
    cin >> x;

    if(x%7 == 2){
        cout << 1;
    }else{
        cout << 0;
    }
}