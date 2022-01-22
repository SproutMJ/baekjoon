//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//	vector<string> name(21);
//	vector<vector<char>> nasty(21, vector<char>(21));
//	
//	int times = 1;
//	while (true)
//	{
//		int n;
//		cin >> n;
//		if (n == 0)
//			break;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> name[i];
//			for (int j = 1; j < n; j++)
//				cin >> nasty[i][j];
//		}
//
//		vector<string> ans;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j < n; j++)
//				if (nasty[i][j] == 'N')
//					ans.push_back(name[(i - j >= 1) ? i - j : n - abs(i - j)] + " was nasty about " + name[i]);
//
//		std::cout << "Group " << times++ << "\n";
//		if (ans.size() == 0)
//			std::cout << "Nobody was nasty\n";
//		else
//			for (const auto& x : ans)
//				std::cout << x << "\n";
//		std::cout << "\n";
//		ans.clear();
//	}
//}