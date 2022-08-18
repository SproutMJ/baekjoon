#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    int a = 0,b = 0,c = 0;
    while(t--){
        int i,j,k;
        cin >> i >>j>>k;
        a+=i;
        b+=j;
        c+=k;
        if(a>=30&&b>=30&&c>=30){
            cout << min(a,min(b,c)) <<"\n";
            int tmp = min(a,min(b,c));
            a-=tmp;
            b-=tmp;
            c-=tmp;
        }
        else{
            cout << "NO\n";
        }
    }
}