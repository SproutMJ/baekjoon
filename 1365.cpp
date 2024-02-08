#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i : v)
        cin>>i;

    vector<int> lis;
    for(const auto &i:v){
        if(lis.empty()||lis.back()<i){
            lis.push_back(i);
            continue;
        }

        *lower_bound(lis.begin(), lis.end(), i) = i;
    }

    cout << n - lis.size();
}