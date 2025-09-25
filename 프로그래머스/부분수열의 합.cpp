#include <iostream>
#include <vector>

using namespace std;

int answer = 0;


void dfs(int start, int n, int sum, int target, vector<int> v){
	if(start == n){
		if (sum == target){
			answer++;
		}
		return;
	}
	
	dfs(start+1, n, sum, target, v);
	dfs(start+1, n, sum+v[start], target, v);
}


int main(){
	int n, s, a;
	vector<int> v;
	
	cin >> n >> s;
		
	for(int i=0; i<n; i++){
		cin >> a;
		v.push_back(a);
	}
	
	dfs(0, n, 0, s, v);
	
	if(s == 0){
		answer--;
	}

	cout << answer;
	
}
