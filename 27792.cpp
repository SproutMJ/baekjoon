#include <iostream>
#include <queue>
#include <algorithm>
#include<cmath>
#include<numeric>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for(auto &i: v){
        cin >> i;
    }

    int maxv = *max_element(v.begin(), v.end());
    int minv = 1;
    while(minv <= maxv){
        int mid = (minv+maxv)/2;

        int tmp = accumulate(v.begin(), v.end(), 0, [&mid](int val, int vval)->int{
            return val+ceil(vval/(double)mid);
        });

        if(tmp>n){
            minv = mid+1;
        }else{
            maxv = mid-1;
        }
    }

    cout << minv;
}