#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int f(string s) {
    if (s == "A+") {
        return 45;
    } else if (s == "A0") {
        return 40;
    } else if (s == "B+") {
        return 35;
    } else if (s == "B0") {
        return 30;
    } else if (s == "C+") {
        return 25;
    } else if (s == "C0") {
        return 20;
    } else if (s == "D+") {
        return 15;
    } else if (s == "D0") {
        return 10;
    } else if (s == "F") {
        return 0;
    }
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cout << fixed;
    cout.precision(6);

    int score_sum = 0, credit_sum = 0;
    for (int i = 0; i < 20; i++) {
        string s;
        cin >> s;
        double credit;
        cin >> credit;
        string score;
        cin >> score;
        if (score == "P") continue;
        credit_sum += credit * 10;
        score_sum += f(score) * credit * 10;
    }

    cout << (double) score_sum / credit_sum / 10;
}