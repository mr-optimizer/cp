#include<bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=x ; i<y ; i++)
#define f first
#define s second
#define pb push_back
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
template<typename T> inline T abs(T a) { return ((a < 0) ? -a : a); }

const long long mod = 1e9 + 7;
const double pi = 3.1415926536;
template<typename T>
void print1D(vector<T> nums) {for (int i = 0; i < nums.size() - 1; i++)cout << nums[i] << " "; cout << nums[nums.size() - 1];}
template<typename T>
void swapit(T &a, T &b) {T temp = a; a = b; b = temp;}
int gcd(int a, int b) {if (b == 0)return a; return gcd(b, a % b);}
int digits_count(int n) {return (n < 10 ? 1 : n < 100 ? 2 : n < 1000 ? 3 : n < 10000 ? 4 : n < 100000 ? 5 : n < 1000000 ? 6 : n < 10000000 ? 7 : n < 100000000 ? 8 : n < 1000000000 ? 9 : 0);}
long long power(long long x, long long n) {x = x % mod; if (x == 0)return 0; long long result = 1; while (n > 0) {if (n & 1)result = (result * x) % mod; n = n >> 1; x = (x * x) % mod;} return result;}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n96;
	cin >> n96;
	while (n96--) {
		int n;
		cin >> n;
		vc v(n);
		rep(i, 0, n)cin >> v[i];
		int li = -1;
		char c;
		for (int i = 0; i < n; i++) {
			if (v[i] != '?') {
				li = i;
				c = v[i];
				int j = i - 1;
				while (j >= 0 and v[j] == '?') {
					char tc = c == 'R' ? 'B' : 'R';
					v[j] = tc;
					j--;
					c = tc;
				}
			}
		}
		if (li == -1 ) {
			li = 0;
			v[li] = 'B';
		}
		c = v[li];
		li++;

		while (li < n) {
			char tc = c == 'R' ? 'B' : 'R';
			v[li] = tc;
			li++;
			c = tc;
		}
		for (int i = 0; i < n; i++) {
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}