//input is generated randomly

#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL)
#define mod 1000000007
#define  pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef  long double ld;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi >vvi;
typedef vector<ll> vll;
typedef vector<vll >vvll;


ll n, m;
ll maxN = 101, maxnumber = 5;
ll pos_i = 1, pos_j = 1, max_length = 1;
ll a[1001][1001], dp[1001][1001];
ll path[1001][1001], path_table[1001][1001];


void print_path() {


	while (true) {
		path_table[pos_i][pos_j] = a[pos_i][pos_j];
		if (path[pos_i][pos_j] == 1)pos_j++;
		else if (path[pos_i][pos_j] == -1)pos_i++;
		else break;
	}

	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= m; j++)cout << path_table[i][j] << " ";
		cout << "\n";
	}
}


void solve() {


//base_cases---->

	dp[n][m] = 1;
	path[n][m] = 0;


//bottom most row
	for (ll i = m - 1; i >= 1; i--) {
		if (a[n][i] == a[n][i + 1] + 1 || a[n][i] == a[n][i + 1] - 1) {
			dp[n][i] = dp[n][i + 1] + 1, path[n][i] = 1;
			if (dp[n][i] > max_length)max_length = dp[n][i], pos_i = n, pos_j = i;
		}
		else dp[n][i] = 1;
	}

//right most coulmn
	for (ll i = n - 1; i >= 1; i--) {
		if (a[i][m] == a[i + 1][m] + 1 || a[i][m] == a[i + 1][m] - 1) {
			dp[i][m] = dp[i + 1][m] + 1, path[i][m] = -1;
			if (dp[i][m] > max_length)max_length = dp[i][m], pos_i = i, pos_j = m;
		}
		else dp[i][m] = 1;
	}




	for (ll i = n - 1; i >= 1; i--) {
		for (ll j = m - 1; j >= 1; j--) {
			bool right_possible = false, down_possible = false;
			if (a[i][j] == a[i][j + 1] + 1 || a[i][j] == a[i][j + 1] - 1)right_possible = true;
			if (a[i][j] == a[i + 1][j] + 1 || a[i][j] == a[i + 1][j] - 1)down_possible = true;

			if (!right_possible && !down_possible) {
				dp[i][j] = 1;
				continue;
			}
			if (right_possible)dp[i][j] = dp[i][j + 1] + 1, path[i][j] = 1;
			if (down_possible && dp[i + 1][j] + 1 > dp[i][j])dp[i][j] = dp[i + 1][j] + 1, path[i][j] = -1;

			if (dp[i][j] > max_length)max_length = dp[i][j], pos_i = i, pos_j = j;
		}
	}

	cout << "\nmaximum length is----> " << max_length << "\n";
	cout << "\npath--->\n";
	print_path();
}

int main() {
	IOS;
	srand(time(0));

	n = rand() % maxN + 1, m = rand() % maxN + 1;

	cout << "matrix width and height are--> \n" << n << " " << m << "\n";

	for (ll i = 1; i <= n; i++)for (ll j = 1; j <= m; j++)a[i][j] = rand() % maxnumber + 1;

	cout << "\ninput matrix is---> \n";
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= m; j++)cout << a[i][j] << " ";
		cout << "\n";
	}

	solve();
}
