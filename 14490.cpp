#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int gcd(int a,int b){
    return b?gcd(b, a%b):a;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string s;
    cin >>s;

    int a = stoi(s.substr(0,s.find(':')));
    int b = stoi(s.substr(s.find(':')+1));
    int tmp = gcd(a,b);

    cout << a/tmp << ":" << b/tmp;

}