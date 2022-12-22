#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

string f(int sc) {
    if (sc >= 97)
        return "A+";
    if (sc >= 90)
        return "A";
    if (sc >= 87)
        return "B+";
    if (sc >= 80)
        return "B";
    if (sc >= 77)
        return "C+";
    if (sc >= 70)
        return "C";
    if (sc >= 67)
        return "D+";
    if (sc >= 60)
        return "D";
    return "F";
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int score;
        cin >> score;
        cout << s << " " << f(score) << "\n";
    }
}