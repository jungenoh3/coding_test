#include <iostream>
#include <vector>

using namespace std;

const long long int INF = 987654321LL;

int main(){
	int answer = 0;
	int n, m, node1, node2, cost;
	
	cin >> n;
	cin >> m;
	
	vector<long long int> costs(n, INF);
	vector<vector<pair<int, int>>> graph(n);
	
	for(int i=0; i<m; i++){
		cin >> node1 >> node2 >> cost;
		node1--;
		node2--;
		graph[node1].push_back({node2, cost});
	}
	
	costs[0]=0;
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n; j++){
			if (costs[j] == INF) continue; // ¿ÖÁö??? 
			for(auto p : graph[j]){
				if(costs[j] + p.second < costs[p.first]){
					costs[p.first] = costs[j] + p.second;
				}
			}
		}
	}
	
	for(int j=0; j<n; j++){
		if (costs[j] == INF) continue; // Èì 
		for(auto p : graph[j]){
			if(costs[j] + p.second < costs[p.first]){
				cout << "-1";
				return 0;
			}
		}
	}
	
	for (int i=1; i<n; i++){
		if(costs[i] == INF){
			cout << "-1\n";
		} else {
			cout << costs[i] << "\n";
		}
	}
	
} 
