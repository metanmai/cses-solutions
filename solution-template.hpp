//
// Created by Tanmai Niranjan on 16/09/23.
//

#ifndef CSES_SOLUTIONS_SOLUTION_TEMPLATE_HPP
#define CSES_SOLUTIONS_SOLUTION_TEMPLATE_HPP
//#include<bits/stdc++.h>
#include "stdc++.h"
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define FF first
#define SS second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define endl '\n'
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

const int MOD = 1e9 + 7;
//const int N = 3e5, M = N;
////=======================
//
//vi g[N];
//int a[N];

int mpow(int base, int exp) {
  base %= MOD;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % MOD;
    base = ((ll)base * base) % MOD;
    exp >>= 1;
  }
  return result;
}
struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//void ipgraph(int n, int m) {
//	int i, u, v;
//	while(m--){
//		cin>>u>>v;
//    u--, v--;
//		g[u].pb(v);
//		g[v].pb(u);
//	}
//}
//
//void dfs(int u, int par){
//	for(int v:g[u]){
//		if (v == par) continue;
//		dfs(v, u);
//	}
//}

#endif //CSES_SOLUTIONS_SOLUTION_TEMPLATE_HPP
