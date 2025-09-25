#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<bool> visited;

void dfs(int curr, vector<vector<int>> graph){    
    visited[curr] = true;
    
    for(int i=0; i<graph[curr].size(); i++){
        if (!visited[graph[curr][i]]){
            dfs(graph[curr][i], graph);
        }
    }
}


int solution(int n, vector<vector<int>> wires) {
    int answer = 200;
    vector<vector<int>> graph(n);
    visited.resize(n, false);
    
    for(int i=0; i<wires.size(); i++){
        int a = wires[i][0]-1;
        int b = wires[i][1]-1;
        
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    for(int i=0; i<wires.size(); i++){
        vector<vector<int>> copy_graph(graph);
        int a = wires[i][0]-1;
        int b = wires[i][1]-1;
        
        copy_graph[a].erase(remove(copy_graph[a].begin(), copy_graph[a].end(), b), copy_graph[a].end());
        copy_graph[b].erase(remove(copy_graph[b].begin(), copy_graph[b].end(), a), copy_graph[b].end());
        
        for(int i=0; i<visited.size(); i++){
        	visited[i]=false;
		}
        
        dfs(0, copy_graph);
        
        int count = 0;
        for(int j=0; j<visited.size(); j++){
            if(visited[j]){
                count++;
            }
        }
        cout << "count: " << count << endl; 
        
        int left = n - count; // 9 - 1 = 8
        int result = left > count ? left - count : count - left; // 8 - 1 = 7
        cout << "result: " << result << endl;
	 
		if(result < answer){
            answer = result;
        }
    }
    
    return answer;
}

int main(){
	//[[1, 3], [2, 3], [3, 4], [4, 5], [4, 6], [4, 7], [7, 8], [7, 9]]
	vector<vector<int>> a = {{1,3,},{2,3},{3,4},{4,5},{4,6},{4,7},{7,8},{7,9}};
	cout << solution(9, a);
}
