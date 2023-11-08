#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &i: v) {
        int tmp;
        cin >> i >> tmp;
    }

    cout << accumulate(v.begin(), v.end(), 0, [](int init, int val){
        if(val == 136)
            return init + 1000;
        if(val == 142)
            return init + 5000;
        if(val == 148)
            return init + 10000;
        return init + 50000;
    });
}