#include<bits/stdc++.h>
using namespace std;


int main() {

	int t ;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = (n * (n + 1) * (2 * n + 1)) / 6;
		cout << ans << endl;

	}
	return 0;
}