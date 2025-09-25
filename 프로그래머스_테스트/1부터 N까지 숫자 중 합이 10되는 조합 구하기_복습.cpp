#include <iostream>
#include <vector> 

using namespace std;

vector<vector<int>> answer;

void solution (int idx, int sum, vector<int> v, vector<int> visited){
	if(idx == v.size()){
		if(sum == 10){
			answer.push_back(visited);
		}
		return;
	}
	
	visited.push_back(v[idx]);
	solution(idx+1, sum+v[idx], v, visited);
	visited.pop_back();
	solution(idx+1, sum, v, visited);
}


int main(){
	int n;
	
	cin >> n;
	
	vector<int> v;
	
	for(int i=1; i<=n; i++){
		v.push_back(i);
	}
	
	solution(0, 0, v, {});
	
	for(int i=0; i<answer.size(); i++){
		for(int j=0; j<answer[i].size(); j++){
			cout << answer[i][j] < " ";
		}
		cout << endl;
	}
	
	return 0;
}
