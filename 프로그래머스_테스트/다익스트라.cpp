#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

const int INF = 9876543210;

using namespace std;

struct compare {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
};

int main(){
	int answer = 0;
	int n, m, start, end, node1, node2, cost;
	vector<int> costs;
	vector<int> neighbor;
	unordered_set<int> visited;
	priority_queue<pair<int, int>, vector<pair<int, int>>, compare> q;
	
	cin >> n;
	cin >> m;
	
	costs.resize(n, INF);
	neighbor.resize(n, INF);
	
	vector<vector<pair<int, int>>> graph(n);
	
	for(int i=0; i<m; i++){
		cin >> node1 >> node2 >> cost;
		node1--;
		node2--;
		
		graph[node1].push_back({node2, cost});
	}
	
	cin >> start >> end;
	start--;
	end--;
	
	neighbor[start]=start;
	costs[start]=0;
	q.push({start, 0});
	
	
	while(!q.empty()){		
		start = q.top().first;
		q.pop();
		
		if(visited.find(start) != visited.end()){
			continue;
		}
		visited.insert(start);

		for(int i=0; i<graph[start].size(); i++){
			int next = graph[start][i].first;
			int cost = graph[start][i].second;
			
			if (costs[start] + cost < costs[next]){ 
				neighbor[next] = start; 
				costs[next] = costs[start] + cost;
				q.push({next, costs[next]});
			}
		}
	}

	cout << costs[end];
}
