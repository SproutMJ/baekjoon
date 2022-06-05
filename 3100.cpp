#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string arr[6];
	for (auto& i : arr)cin >> i;

	unordered_map<char, int> mp[3];
	for (int i = 0; i <= 4; i += 2) {
		for (const auto& j : arr[i])
			if (mp[i / 2].find(j) == mp[i / 2].end()) mp[i / 2][j] = 1;
			else mp[i / 2][j]++;
		for (const auto& j : arr[i + 1])
			if (mp[i / 2].find(j) == mp[i / 2].end()) mp[i / 2][j] = 1;
			else mp[i / 2][j]++;
	}

	int ans = 0;
	for (const auto& i : mp[1]) {
		int tmp = 0, now = 0;
		for (const auto& j : mp[0])
			if (i.first != j.first && j.second > now)
				now = j.second;
			
		tmp += now;
		now = 0;
		for (const auto& j : mp[2])
			if (i.first != j.first && j.second > now)
				now = j.second;
		tmp += now;
		if (i.second + tmp > ans)
			ans = i.second + tmp;
	}

	mp[0].clear();
	mp[1].clear();
	mp[2].clear();
	for (int j = 0; j < 9; j++)
		for (int i = 0; i < 6; i++)
			if (mp[j / 3].find(arr[i][j]) == mp[j / 3].end()) mp[j / 3][arr[i][j]] = 1;
			else mp[j / 3][arr[i][j]]++;

	int ans2 = 0;
	for (const auto& i : mp[1]) {
		int tmp = 0, now = 0;
		for (const auto& j : mp[0])
			if (i.first != j.first && j.second > now)
				now = j.second;

		tmp += now;
		now = 0;
		for (const auto& j : mp[2])
			if (i.first != j.first && j.second > now)
				now = j.second;
		tmp += now;
		if (i.second + tmp > ans2)
			ans2 = i.second + tmp;
	}

	cout << 54 - max(ans, ans2);
}