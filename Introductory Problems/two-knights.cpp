#include "../solution-template.hpp"
// Time Complexity: O(n)
// Space Complexity: O(1)
/*
 * Find the number of 2 x 3 and 3 x 2 grids in the grid. Each of these grids has 2 invalid moves.
 * Subtract this from the total number of combinations.
 */
void solve()
{
	int i, n;
	cin >> n;

	Fo(i, 1, n + 1)
	{
		ll totalCombos = (ll) (i * i) * ((i * i) - 1) / 2;
		ll invalidCombos = 2 * (i - 2) * (i - 1);

		cout << (ll) totalCombos - (2 * invalidCombos) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	int t = 1;
//    cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}