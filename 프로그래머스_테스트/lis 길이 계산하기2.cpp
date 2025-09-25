#include <iostream>

using namespace std;

int main(){
	int n;
	int arr[1001], dp[1001] = {0,};
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	dp[0] = 1;
	for(int i=1; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[i] > arr[j]){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		dp[i] = dp[i] == 0 ? 1 : dp[i];
	}
	
	int maxNum = 0;
	for(int i=0; i<n; i++){ 
		maxNum = max(maxNum, dp[i]);
	}
	
	cout << maxNum;
	
	return 0;
}
