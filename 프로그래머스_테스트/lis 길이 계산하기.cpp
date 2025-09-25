#include <vector>
#include <algorithm> 
#include <iostream>

using namespace std;

int solution(vector<int> nums){
	int n = nums.size();
	vector<int> dp(n, 1);
	
	for(int i=1; i<n; i++){
		for(int j=0; j<i; j++){
			if(nums[i] > nums[j]){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout << dp[i] << " ";
	}
	cout << endl;
	
	return *max_element(dp.begin(), dp.end());
}

int main(){
	cout << solution({1, 4, 2, 3, 1, 5, 7, 3});
} 
