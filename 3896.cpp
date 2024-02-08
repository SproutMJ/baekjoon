#include <iostream>
#include <queue>
#include <algorithm>
#include<cmath>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    vector<bool> prime(1299709+1, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i<=sqrt(1299709+1); i++){
        if(prime[i]){
            for(int j = i*2; j<=1299709+1; j+=i){
                prime[j] = false;
            }
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(prime[n]){
            cout << 0 << "\n";
            continue;
        }
        int ans = 0;
        int i = n-1, j = n+1;
        for(i; i>=0; i--){
            if(prime[i] == true){
                break;
            }
        }
        for(j; j<=1299709; j++){
            if(prime[j] == true){
                break;
            }
        }
        cout << j -  i << "\n";
    }
}