//#include <iostream>
//#include <vector>
//#include <numeric>
//using namespace std;
//long long memo[51];
//long long fun(int a) {
//	if (a == 0)
//		return 1;
//	else if (memo[a] != 0)
//		return memo[a];
//	else {
//		memo[a] = (fun(a - 1) * 31) % 1234567891LL;
//		return memo[a];
//	}
//}
//
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//	for (auto& i : memo) {
//		i = 0;
//	}
//
//	string s;
//	cin >> s >> s;
//
//	vector<long long> sum;
//	for (string::size_type i = 0; i < s.length(); i++) {
//		sum.push_back(((s[i] - 'a' + 1) * fun(i)) % 1234567891LL);
//	}
//	cout << accumulate(sum.begin(), sum.end(), 0LL) % 1234567891LL;
//}