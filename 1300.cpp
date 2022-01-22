#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, K;
	cin >> N >> K;

	int start = 1, end = K, result = 0;
	while (start <= end)
	{
		int cnt = 0, mid = (start + end) / 2;
		for (int i = 1; i <= N; i++) cnt += (min(mid / i, N));
		if (cnt < K)start = mid + 1;
		else {
			end = mid - 1;
			result = mid;
		}
	}

	cout << result;
}