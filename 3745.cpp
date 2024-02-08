#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    while(cin >> n){
        vector<int> arr(n);
        vector<int> lis;
        for(auto &i : arr){
            cin>>i;
        }

        for(int i = 0; i<n; i++){
            if(lis.empty() || lis.back()<arr[i]){
                lis.push_back(arr[i]);
                continue;
            }
            int idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
            lis[idx] = arr[i];
        }

        cout << lis.size() << "\n";
    }
}