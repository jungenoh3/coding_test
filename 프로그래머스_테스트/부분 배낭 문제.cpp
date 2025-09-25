#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double solution(vector<vector<double>> items, int weight_limit){
	double answer = 0;
	int n = items.size();
	for(int i=0; i<n; i++){
		items[i].push_back(items[i][1]/items[i][0]);
	}
	
	sort(items.begin(), items.end(), [](vector<double> a, vector<double> b){
		return a[2] > b[2];
	});
	
	int idx = 0;
	while(weight_limit > 0){		
		if(items[idx][0] == 0){
			idx++;
		}
		
		if(idx == n){
			break;
		}
		
		answer += items[idx][2];
		items[idx][0]--;
		weight_limit--; 
	}
	
	return answer;
}

int main(){
	cout << solution({{10,60},{20,100},{30,120}}, 50);
}
