#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
char pos;

char left(char pos) {
    switch (pos) {
        case 'N':
            return 'W';
        case 'E':
            return 'N';
        case 'W':
            return 'S';
        case 'S':
            return 'E';
    }
}

char right(char pos) {
    switch (pos) {
        case 'N':
            return 'E';
        case 'E':
            return 'S';
        case 'W':
            return 'N';
        case 'S':
            return 'W';
    }
}

char back(char pos) {
    switch (pos) {
        case 'N':
            return 'S';
        case 'E':
            return 'W';
        case 'W':
            return 'E';
        case 'S':
            return 'N';
    }
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    pos = 'N';
    int t = 10;
    while (t--) {
        int com;
        cin >> com;
        switch (com) {
            case 1:
                pos = right(pos);
                break;
            case 2:
                pos = back(pos);
                break;
            default:
                pos = left(pos);
        }
    }

    cout << pos;
}