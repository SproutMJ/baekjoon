#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    map<string, string> mp;
    mp["SONGDO"] = "HIGHSCHOOL";
    mp["CODE"] = "MASTER";
    mp["2023"] = "0611";
    mp["ALGORITHM"] = "CONTEST";
    
    string s;
    cin >> s;
    cout << mp[s];
}