#include "../solution-template.hpp"
// Time Complexity: O(n)
// Space Complexity: O(n)

void subs(map<int, vector<int>> &adj, int node, vi &ans)
{
	if(adj[node].size() == 0)
		return;

	for(auto next : adj[node])
	{
		subs(adj, next, ans);
		ans[node] += 1 + ans[next];
	}
}

void solve()
{
	int i, j, n, m;
	cin >> n;
	map<int, vector<int>> adj;
	Fo(i, 2, n + 1)
	{
		adj[si(m)].pb(i);
	}

	vi ans(n + 1);
	subs(adj, 1, ans);

	Fo(i, 1, n + 1)
		cout << ans[i] << " ";
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