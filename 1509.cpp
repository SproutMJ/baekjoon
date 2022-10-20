#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
string s;
int dp[2510];
bool palin[2510][2510];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >>s;
    for (int i=1; i<=s.length(); i++)
        palin[i][i] = true;

    
}