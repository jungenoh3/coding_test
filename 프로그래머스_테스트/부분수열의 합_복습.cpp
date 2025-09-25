#include <iostream>
#include <vector>

using namespace std; 

int answer = 0;

void dfs(int s, int sum, int idx, const vector<int> &v){
	if (idx >= v.size()){
		if(sum==s){
			answer++;
		}
		return;
	}
	
	
	dfs(s, sum, idx+1, v);
	dfs(s, sum+v[idx], idx+1, v);
}


int main(){
	int n, s;
	
	cin >> n >> s;
	
	vector<int> v(n);
	
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	
	dfs(s, 0, 0, v);
	
	if(s==0){
		answer--;
	}
	
	cout << answer;
	
	return 0;
}
