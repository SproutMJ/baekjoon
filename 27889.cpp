#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    string s;
    cin >> s;
    if( s == "NLCS") cout << "North London Collegiate School";
    else if(s == "BHA") cout << "Branksome Hall Asia";
    else if(s == "KIS") cout << "Korea International School";
    else cout << "St. Johnsbury Academy";
}