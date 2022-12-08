#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--) {

        double val;
        string s;
        cin >> val >> s;

        if (s == "kg")
            printf("%.4lf lb\n", val * 2.2046);
        else if (s == "lb")
            printf("%.4lf kg\n", val * 0.4536);
        else if (s == "l")
            printf("%.4lf g\n", val * 0.2642);
        else if (s == "g")
            printf("%.4lf l\n", val * 3.7854);
    }
}