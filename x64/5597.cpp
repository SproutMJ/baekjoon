//
// Created by 김민준 on 2022/06/25.
//
#include <iostream>
#include <queue>
bool arr[31];
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    for (int i=1; i<=28; i++){
        int x;
        cin >>x;
        arr[x] = 1;
    }

    for (int i=1; i<=30; i++){
        if(!arr[i])cout << i << "\n";
    }
}