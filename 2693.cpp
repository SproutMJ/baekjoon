#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--){
		int arr[10];
		for (auto& i : arr) cin >> i;
		sort(begin(arr), end(arr));
		cout << arr[7] << "\n";
	}
}