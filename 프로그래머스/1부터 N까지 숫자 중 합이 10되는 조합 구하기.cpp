#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> answer; 

void dfs(int curr, int n, int sum, int target, vector<int> v){
	if(sum == target){
		answer.push_back(v);
		return;
	}
	if(curr > n || sum > target){
		return;
	}
	
	dfs(curr+1, n, sum, target, v);
	v.push_back(curr);
	dfs(curr+1, n, sum+curr, target, v);
	
	
}

vector<vector<int>> solution(int N){
	vector<int> v;
	dfs(1, N, 0, 10, v);
	
	return answer;
}

// 두개를 더 못찾아... 
int main(){
	vector<vector<int>> a = solution(7);
	for(int i=0; i<a.size(); i++){
		for(int j=0; j<a[i].size(); j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
} 
