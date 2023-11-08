#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "Algorithm")
            cout << "204";
        else if (s == "DataAnalysis")
            cout << 207;
        else if (s == "ArtificialIntelligence")
            cout << 302;
        else if (s == "CyberSecurity")
            cout << "B101";
        else if (s == "Network")
            cout << "303";
        else if (s == "Startup")
            cout << "501";
        else
            cout << 105;
        cout << "\n";
    }
}