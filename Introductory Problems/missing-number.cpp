#include "../solution-template.hpp"

void solve()
{
	int i, j, n, m;
	cin >> n;
	vi vec(n - 1);
	fo(i, n - 1) cin >> vec[i];
	set<int> st(all(vec));

	Fo(i, 1, n + 1)
	if(!st.count(i))
	{
		pi(i);
		return;
	}

	pi(-1);
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