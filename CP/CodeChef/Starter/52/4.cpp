#include<bits/stdc++.h>
using namespace std;

#define  rep(i,x,y)      for(int i=x ; i<y ; i++)
#define  F               first
#define  S               second
#define  pb              push_back
#define  sz(v)           int((v).size())
#define  all(v)          (v).begin(), (v).end()
#define  min3(a,b,c)     min(a,min(b,c))
#define  min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define  max3(a,b,c)     max(a,max(b,c))
#define  max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define  gcd             __gcd
#define  ub              upper_bound
#define  lb              lower_bound
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
template<typename T> inline T abs(T a) { return ((a < 0) ? -a : a); }

const long long mod = 1e9 + 7;
const double pi = 3.14159265358979323846264338327950288419;
template<typename T>
void print1D(vector<T> nums) {for (int i = 0; i < nums.size() - 1; i++)cout << nums[i] << " "; cout << nums[nums.size() - 1];}
template <typename T>
void print2D(vector<vector<T>> &nums) {for (int i = 0; i < nums.size(); i++) {print1D(nums[i]); cout << endl;}}
template<typename T>
void swapit(T &a, T &b) {T temp = a; a = b; b = temp;}
int digits_count(int n) {return (n < 10 ? 1 : n < 100 ? 2 : n < 1000 ? 3 : n < 10000 ? 4 : n < 100000 ? 5 : n < 1000000 ? 6 : n < 10000000 ? 7 : n < 100000000 ? 8 : n < 1000000000 ? 9 : 0);}
long long power(long long x, long long n) {x = x % mod; if (x == 0)return 0; long long result = 1; while (n > 0) {if (n & 1)result = (result * x) % mod; n = n >> 1; x = (x * x) % mod;} return result;}


void solve() {
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll r = 0, l = 0;
	// cout << s << endl;
	int j = 0;
	while (s[j] == '0')j++;
	rep(i, j, n - k) {
		if (s[i] == '0') {
			if (i >= l and i <= r) {
				// continue;
				l = r + 1;
				r = i + k - 1;
			} else {

			}
		} else {
			if (i >= l and i <= r) {
				l = r + 1;
				r = i + k - 1;
			}
		}
		s[i] = '0';
	}
	for (int i = l; i < min(n, r + 1); i++) {
		s[i] = s[i] == '1' ? '0' : '1';
	}
	cout << s << endl;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t clk__ = clock();
	int __ = 1;
	cin >> __;
	while (__--) solve();
	cerr << "Run Time : " << ((double)(clock() - clk__) / CLOCKS_PER_SEC) << "s";
	return 0;
}