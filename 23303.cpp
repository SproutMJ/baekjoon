#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string s;
    getline(cin , s);
    if(s.find("D2")  != string::npos||s.find("d2")!= string::npos)
        cout << "D2";
    else
        cout << "unrated";
}