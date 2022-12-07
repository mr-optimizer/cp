#include <bits/stdc++.h>
using namespace std;
#define  rep(i,x,y)      for(int i=x ; i<y ; i++)
#define  F               first
#define  S               second
#define  pb              push_back
#define  sz(v)           int((v).size())
#define  all(v)          (v).begin(), (v).end()
#define  gcd             __gcd
#define  endl           "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

const long long MOD = 1e9 + 7;
const double PI = 3.14159265358979323846264338327950288419;
template<typename T>
void print1D(vector<T> nums) {for (int i = 0; i < nums.size() - 1; i++)cout << nums[i] << " "; cout << nums[nums.size() - 1];}
template <typename T>
void print2D(vector<vector<T>> &nums) {for (int i = 0; i < nums.size(); i++) {print1D(nums[i]); cout << endl;}}
long long power(long long x, long long n) {x = x % MOD; if (x == 0)return 0; long long result = 1; while (n > 0) {if (n & 1)result = (result * x) % MOD; n = n >> 1; x = (x * x) % MOD;} return result;}

void solve();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int __ = 1;
	// cin >> __;
	while (__--) {
		solve();
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
int cntNbh(vector<vector<char>>&s, int n, int m, int i, int j) {
	int cnt = 0 ;
	if (i + 1 < n and s[i + 1][j] == '*') {
		cnt++;
	}
	if (j + 1 < m and s[i][j + 1] == '*') {
		cnt++;
	}
	if (i - 1 >= 0 and s[i - 1][j] == '*') {
		cnt++;
	}
	if (j - 1 >= 0 and s[i][j - 1] == '*') {
		cnt++;
	}
	if (i + 1 < n and j + 1 < m and s[i + 1][j + 1] == '*') {
		cnt++;
	}
	if (i + 1 < n and j - 1 >= 0 and s[i + 1][j - 1] == '*') {
		cnt++;
	}
	if (i - 1 >= 0 and j - 1 >= 0 and s[i - 1][j - 1 ] == '*') {
		cnt++;
	}
	if (i - 1 >= 0 and j + 1 < m and s[i - 1][j + 1] == '*') {
		cnt++;
	}
	return cnt;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<char>>s(n, vector<char>(m));
	rep(i, 0, n) {
		rep(j, 0, m)cin >> s[i][j];
	}
	for (int i = 0; i  < n; i++) {
		for (int j = 0 ; j < m; j++) {
			if ((s[i][j] >= '1' and s[i][j] <= '9')) {
				int x = cntNbh(s, n, m, i, j);
				if (x != (s[i][j] - '0')) {
					cout << "NO" << endl;
					return;
				}
			} else if (s[i][j] == '.') {
				int x = cntNbh(s, n, m, i, j);
				if (x != 0) {
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
}
