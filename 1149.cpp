// https://www.acmicpc.net/problem/1149
#include<bits/stdc++.h>
using namespace std;
int DP[1001][3];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int R, G, B;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> R >> G >> B;
		DP[i][0] = min(DP[i - 1][1], DP[i - 1][2]) + R;
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + G;
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + B;
	}
	cout << min(min(DP[N][0], DP[N][1]), DP[N][2]);
	return 0;
}
