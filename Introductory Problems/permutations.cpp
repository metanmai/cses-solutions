#include "../solution-template.hpp"

void solve()
{
	int i, j, n, m;
	cin >> n;

	if(n == 2 or n == 3)
	{
		cout << "NO SOLUTION" << endl;
		return;
	}

	else if(n == 4)
	{
		cout << "2 4 1 3" << endl;
		return;
	}

	int nn = n;
	if(n % 2 == 1)
		nn -= 1;

	while(nn > 0)
	{
		cout << nn << " ";
		nn -= 2;
	}

	if(n % 2 == 0)
		n -= 1;

	while(n > 0)
	{
		cout << n << " ";
		n -= 2;
	}
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