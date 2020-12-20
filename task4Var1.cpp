#include<iostream>

using namespace std;

bool memo[1000001];
int a, b;

int main() {
	cin >> a >> b;
	int m;
	cin >> m;

	int min = a < b ? a : b;
	int max = a > b ? a : b;

	for (int i = 0; i < min; i++) {
		memo[i] = false;
	}

	memo[min] = true;

	for (int i = min + 1; i < max; i++) {
		if (memo[i - min]) {
			memo[i] = false;
		}
		else {
			memo[i] = true;
		}
	}

	memo[max] = true;

	for (int i = max + 1; i < 1000001; i++) {
		if (!memo[i - a] || !memo[i - b]) {
			memo[i] = true;
		}
		else {
			memo[i] = false;
		}
	}

	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;
		cout << (memo[n] ? 1 : 2) << endl;
	}

	return 0;
}
