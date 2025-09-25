#include <vector>
#include <unordered_map>
#include <set>
#include <queue>
#include <iostream>

using namespace std;

queue<int> q;
unordered_map<int, set<int>> adjList;
set<int> visited;
vector<int> answer;
int count = 0;

// i번째 노드가 몇번째에 방문되느냐? 

void dfs(int node){
	visited.insert(node);
	answer[node-1] = ++count;
	
	for(auto value : adjList[node]){
		if(visited.find(value) == visited.end()){
			dfs(value);
		}
	}	
}

void bfs(int node){
	q.push(node);
	visited.insert(node);
	answer[node-1] = ++count;
	
	while(1){
		if(q.empty()){
			break;
		}
		
		int next = q.front();
		q.pop();
			
		for(auto value : adjList[next]){
			if(visited.find(value) == visited.end()){
				q.push(value);
				visited.insert(value);
				answer[value-1] = ++count;
			}
		}	
	}
}

int main(){
	int n, m, r, a, b;
	cin >> n >> m >> r;
	
	answer.resize(n, 0);
	
	for(int i=0; i<m; i++){
		cin >> a >>  b;
		adjList[a].insert(b);
		adjList[b].insert(a);
	}
	
	bfs(r);

	for(int i=0; i<answer.size(); i++){
		cout << answer[i] << "\n";
	}
}
