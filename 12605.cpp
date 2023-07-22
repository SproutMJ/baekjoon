#include <iostream>
#include <queue>
#include <algorithm>
#include <sstream>
#include <stack>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    cin.ignore();
    for(int i = 1; i<=n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string temp;
        stack<string> stack;
        while (ss >> temp) {
            stack.push(temp);
        }

        cout << "Case #" << i << ":";
        while (!stack.empty()) {
            cout << " " << stack.top();
            stack.pop();
        }
        cout << "\n";
    }
}