#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int arr[100000];

int main(void)
{
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}

	for (int i = n; i >= 0; i--) {
		if (arr[i] == i){
			cout << i << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
	return 0;
}