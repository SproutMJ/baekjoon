#include <iostream>
using namespace std;
int arr[26][200001];
int index[26][2];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	int n;
	cin >> n;

	
	while (n--) {
		char ch;
		int b, e;
		cin >> ch >> b >> e;
		if (index[ch - 'a'][1] < e) {
			index[ch - 'a'][1] = e;
			for (index[ch - 'a'][0]; index[ch - 'a'][0] <= index[ch - 'a'][1]; index[ch - 'a'][0]++) {
				if (index[ch - 'a'][0] == 0)arr[ch-'a'][index[ch - 'a'][0]] = s[0] == ch;
				else if (s[index[ch - 'a'][0]] == ch) arr[ch - 'a'][index[ch - 'a'][0]] = arr[ch - 'a'][index[ch - 'a'][0]-1] + 1;
				else arr[ch - 'a'][index[ch - 'a'][0]] = arr[ch - 'a'][index[ch - 'a'][0] - 1];
			}
		}
		cout << arr[ch - 'a'][e] - ((b == 0) ? 0 : arr[ch - 'a'][b - 1]) << "\n";
	}
}