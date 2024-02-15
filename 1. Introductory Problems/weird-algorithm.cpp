#include "../solution-template.hpp"

void solve()
{
	ll i, j, n, m;
	cin >> n;

	while(n != 1)
	{
		cout << n << " ";
		if(n % 2 == 1)
			n = n * 3 + 1;

		else
			n /= 2;
	}

	cout << 1;
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	int t = 1;
//    cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}