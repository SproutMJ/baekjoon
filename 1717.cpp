//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//vector<int> link;
//vector<int> siz;
//int find(int a) {
//	if (a == link[a]) return a;
//	return link[a] = find(link[a]);
//}
//bool same(int a, int b) {
//	return find(a) == find(b);
//}
//void unite(int a, int b) {
//	a = find(a);
//	b = find(b);
//	if (a != b) {
//		if (siz[a] < siz[b]) {
//			link[a] = b;
//			siz[b] += siz[a];
//		}
//		else {
//			link[b] = a;
//			siz[a] += siz[b];
//		}
//	}
//}
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//
//	int n, m;
//	cin >> n >> m;
//
//	link.resize(n + 1);
//	for (int i = 0; i <= n; i++) link[i] = i;
//	siz.resize(n + 1, 1);
//
//	for (int i = 0; i < m; i++) {
//		int flag, a, b;
//		cin >> flag >> a >> b;
//		if (flag)
//			cout << ((::find(a) == ::find(b)) ? "YES\n" : "NO\n");
//		else
//			unite(a, b);
//	}
//}