#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int sam, sys;
	cin >> sam >> sys;

	for (int i = 0; i < sam; i++) {
		int in, out;
		cin >> in >> out;
		if (in != out) {
			cout << "Wrong Answer";
			return 0;
		}
	}

	for (int i = 0; i < sys; i++) {
		int in, out;
		cin >> in >> out;
		if (in != out) {
			cout << "Why Wrong!!!";
			return 0;
		}
	}

	cout << "Accepted";
}