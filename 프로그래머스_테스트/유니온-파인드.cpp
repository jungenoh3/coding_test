#include <vector>
#include <iostream>

using namespace std;

vector<int> parent;
vector<int> rankData;

int find(int x){
	if (parent[x] == x){
		return x;
	}
	
	parent[x] = find(parent[x]); // 경로 압축시 사용 
	return parent[x];
}

void unionParent(int x, int y){
	int root1 = find(x);
	int root2 = find(y);
	
	if(root1 != root2){
		if (rankData[root1] < rankData[root2]){
			parent[root1] = root2;
		} else if (rankData[root1] > rankData[root2]){
			parent[root2] = root1;
		} else {
			parent[root2] = root1;
			rankData[root1]++;
		}
	}
} 

vector<bool> solution(int k, vector<vector<char>> operation){
	vector<bool> answer;
	parent.resize(k);
	rankData.resize(k, 0);
	
	for(int i=0; i<operation.size(); i++){
		parent[i] = i;
	}
	
	for(int i=0; i<operation.size(); i++){
		if(operation[i][0] == 'u'){
			int x = operation[i][1] - '0';
			int y = operation[i][2] - '0';
			unionParent(x, y);	
		} else if (operation[i][0] == 'f'){
			int x = operation[i][1] - '0';
			int y = operation[i][2] - '0';
			answer.push_back(find(x) == find(y));
		}
	}
	
	return answer;
} 

int main(){
	vector<vector<char>> v= {{'u', '0', '1'}, {'u', '1', '2'}, {'f', '0', '2'}};
	vector<bool> answer = solution(3, v);
	
	for(int i=0; i<answer.size(); i++){
		cout << answer[i] << " ";
	}
}
