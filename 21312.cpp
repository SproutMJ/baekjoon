#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a = 1, b = 1;
    bool flag = false;
    for (int i = 0; i<3; i++){
        int n;
        cin>> n;
        if(n%2 != 0){
            a*=n;
            flag = true;
        }else{
            b*=n;
        }
    }

    if(flag)
        cout << a;
    else
        cout << b;
}