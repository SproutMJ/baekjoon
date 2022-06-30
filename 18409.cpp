#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	char arr[5] = { 'a','e','i','o','u' };

	int n;
	string s;
	cin >> n >> s;

	cout << count_if(s.begin(), s.end(), [&arr](const char& ch)->int {
		return binary_search(arr, arr + 5, ch);
		});
}