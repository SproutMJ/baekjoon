#include <iostream>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
typedef long long ll;

ll mul(ll x, ll y, ll mod) { 
	return (__int128)x * y % mod;
}
ll _pow(ll x, ll y, ll p) {
	ll ret = 1, piv = x % p;
	while (y) {
		if (y & 1) ret = mul(ret, piv, p);
		piv = mul(piv, piv, p);
		y >>= 1;
	}
	return ret;
}
bool miller_rabin(ll x, ll a) {
	if (x % a == 0) return 0;
	ll d = x - 1;
	while (1) {
		ll tmp = _pow(a, d, x);
		if (d & 1) return (tmp != 1 && tmp != x - 1);
		else if (tmp == x - 1) return 0;
		d >>= 1;
	}
}
bool isprime(ll x) {
	for (auto& i : { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 }) {
		if (x == i) return 1;
		if (x > 40 && miller_rabin(x, i)) return 0;
	}
	if (x <= 40) return 0;
	return 1;
}


void rec(ll n, vector<ll>& v) {
	if (n == 1) return;
	if (n % 2 == 0) {
		v.push_back(2);
		rec(n / 2, v);
		return;
	}
	if (isprime(n)) {
		v.push_back(n);
		return;
	}
	ll a, b, c, g = n;
	auto f = [&](ll x) {
		return (c + mul(x, x, n)) % n;
	};
	do {
		if (g == n) {
			a = b = rand() % (n - 2) + 2;
			c = rand() % 20 + 1;
		}
		a = f(a);
		b = f(f(b));
		g = gcd(abs(a - b), n);
	} while (g == 1);
	rec(g, v);
	rec(n / g, v);
}
vector<ll> factorize(ll n) {
	vector<ll> ret;
	rec(n, ret);
	sort(ret.begin(), ret.end());
	return ret;
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	ll n; cin >> n;

	for (auto i : factorize(n)) cout << i << '\n';
}