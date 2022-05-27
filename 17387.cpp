#include <iostream>
using namespace std;
pair<long long, long long> p[4];
void input(pair<long long, long long>& p) {
	cin >> p.first >> p.second;
}
int fun(int i, int ii, int iii) {
	i--;
	ii--;
	iii--;

	long long ans = p[i].first * p[ii].second + p[ii].first * p[iii].second + p[iii].first * p[i].second;
	ans -= p[i].second * p[ii].first + p[ii].second * p[iii].first + p[iii].second * p[i].first;
	if (ans > 0)return 1;
	else if (ans == 0)return 0;
	else return -1;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	for (auto& i : p)
		input(i);

	int abc = fun(1, 2, 3);
	int abd = fun(1, 2, 4);
	int cda = fun(3, 4, 1);
	int cdb = fun(3, 4, 2);

	if (abc * abd == 0 && cda * cdb == 0){
		if (p[0] > p[1])swap(p[0], p[1]);
		if (p[2] > p[3])swap(p[2], p[3]);
		if (p[0] <= p[3] && p[2] <= p[1])
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
		return 0;
	}


	if (abc * abd <= 0 && cda * cdb <= 0)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";
}