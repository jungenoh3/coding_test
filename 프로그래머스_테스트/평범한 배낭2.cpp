#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> items(n);
	for (int i = 0; i < n; i++) {
		cin >> items[i].first >> items[i].second;
	}

	vector<int> dp(k + 1, 0);

	for (int i = 0; i < n; i++) {
		int w = items[i].first;
		int v = items[i].second;

		for (int j = k; j >= w; j--) {  // ¿ª¼ø!
			dp[j] = max(dp[j], dp[j - w] + v);
		}
		
		for(int i=0; i<=k; i++){
			cout << dp[i] << " ";
		}
		cout << endl;
	}

	cout << *max_element(dp.begin(), dp.end()) << endl;
	return 0;
}
