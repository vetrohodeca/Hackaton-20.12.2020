#include<iostream>

using namespace std;

int a, b;
char memo[2][1000001];

bool getWinner(int n, bool current) {
	if (memo[current][n] != 2) {
		return memo[current][n];
	}

	if (n < a && n < b) {
		memo[current][n] = !current;
		return memo[current][n];
	}

	bool possibleWin = false;

	possibleWin = (n >= a && getWinner(n - a, !current) == current);

	if (possibleWin) {
		memo[current][n] = current;
		return memo[current][n];
	}

	possibleWin = (n >= b && getWinner(n - b, !current) == current);

	if (possibleWin) {
		memo[current][n] = current;
		return memo[current][n];
	}

	memo[current][n] = !current;
	return memo[current][n];
}

int main() {
	cin >> a >> b;
	int m;
	cin >> m;

	for (int j = 0; j < 1000001; j++) {
		memo[0][j] = 2;
		memo[1][j] = 2;
	}

	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;
		cout << (getWinner(n, true) ? 1 : 2) << endl;
	}

	return 0;
}
