#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<string> v(n);
    for (auto &i :v) cin >> i;
    int f;
    cin >> f;

    if(f == 1){
        for_each(v.begin(), v.end(), [](auto s)->void{cout << s << "\n";});
    }
    else if(f == 2){
        for(auto &i : v)reverse(i.begin(), i.end());
        for_each(v.begin(), v.end(), [](auto s)->void{cout << s << "\n";});
    }else{
        reverse(v.begin(), v.end());
        for_each(v.begin(), v.end(), [](auto s)->void{cout << s << "\n";});
    }

}