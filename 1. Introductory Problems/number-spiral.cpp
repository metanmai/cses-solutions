#include "../solution-template.hpp"
// Time Complexity: O(1)
// Space Complexity: O(1)

void solve()
{
	ll r, c;
	cin >> r >> c;

	if(r > c)
	{
		if(r & 1)
			cout << ((r - 1) * (r - 1)) + c;

		else
			cout << (r * r) - c + 1;
	}

	else
	{
		if(c & 1)
			cout << (c * c) - r + 1;

		else
			cout << ((c - 1) * (c - 1)) + r;
	}

	cout << '\n';
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	int t = 1;
    cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}