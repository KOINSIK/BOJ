// https://www.acmicpc.net/problem/2579
#include<bits/stdc++.h>
using namespace std;

int stairs[301];
int dp[301];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, i;
	cin >> N;
	for (i = 1; i <= N; i++) {
		cin >> stairs[i];
	}
	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);
	for (i = 4; i <= N; i++) {
		dp[i] = max(stairs[i] + dp[i - 2], stairs[i] + stairs[i - 1] + dp[i - 3]);
	}

	cout << dp[N] << '\n';

	return 0;
}
