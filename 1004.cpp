#include<iostream>
using namespace std;
int main()
{
	int n, t;
	int x, y, r, x1, y1, x2, y2;

	cin >> t;

	while (t--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;

		int in = 0, go = 0;
		while (n--)
		{
			cin >> x >> y >> r;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r)
					go++;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
					in++;
		}

		cout << in + go << '\n';
	}

}