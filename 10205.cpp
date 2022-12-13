#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t, head;
    string s;

    cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> head;
        cin >> s;
        for(const auto b : s) {
            if(b == 'c') head++;
            else head--;
        }

        cout << "Data Set " << i << ":\n" << head << "\n\n";
    }
}