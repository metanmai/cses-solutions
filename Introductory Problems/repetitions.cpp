#include "../solution-template.hpp"
// Time Complexity: O()
// Space Complexity: O()

void solve()
{
	string s;
	cin >> s;

	int maxLen = 1, i = 0, j = 0, currLen = 0, n = s.length();

	fo(j, n) {
		if(s[i] == s[j]) {
			currLen++;
		}

		else {
			currLen = 1, i = j;
		}

		maxLen = max(maxLen, currLen);
	}

	pi(maxLen);
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