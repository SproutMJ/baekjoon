#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int a;
    cin >> a;
    string ans;
    if (a>=620){
        ans = "Red";
    }else if(a>=590){
        ans = "Orange";
    }else if(a>=570){
        ans = "Yellow";
    }else if(a>=495){
        ans = "Green";
    }else if(a>=450){
        ans = "Blue";
    }else if(a>=425){
        ans = "Indigo";
    }else{
        ans = "Violet";
    }

    cout << ans;
}