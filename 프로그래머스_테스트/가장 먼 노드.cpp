#include <string>
#include <vector>
#include <iostream> 

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0, max = 0;
    vector<int> edgeVisit(n+1, 0);
    vector<int> edgeCount(n+1, 0);
    vector<int> visitList = {1};
    
    edgeVisit[1] = 1;
    edgeCount[1] = 0;
    
    while(1) {
        if (visitList.empty()){
            break;
        }
        
        int visitNode = visitList[0];
        visitList.erase(visitList.begin());
        
        // cout << "visitNode: " << visitNode << "\n";
        
        for (int i=0; i<edge.size(); i++){
        	if (edge[i][0] == visitNode && edgeVisit[edge[i][1]] == 0){
        		// cout << "next visit: " << edge[i][1] << "\n";
                visitList.push_back(edge[i][1]);
                edgeVisit[edge[i][1]] = 1;
                edgeCount[edge[i][1]] = edgeCount[edge[i][0]] + 1;
			} else if (edge[i][1] == visitNode && edgeVisit[edge[i][0]] == 0) {
				// cout << "next visit: " << edge[i][0] << "\n";
                visitList.push_back(edge[i][0]);
                edgeVisit[edge[i][0]] = 1;
                edgeCount[edge[i][0]] = edgeCount[edge[i][1]] + 1;
			}
        }
        
        
    }

	for (int i=1; i<=n; i++){
		if (edgeCount[i] > max){
			max = edgeCount[i];
			answer = 1;
		} else if (edgeCount[i] == max){
			answer++;
		}
	}

    return answer;
}

int main(){
	vector<vector<int>> edge = {{3, 6}, {4, 3}, {3, 2}, {1, 3}, {1, 2}, {2, 4}, {5, 2}};
	// cout << "\nanswer: " << solution(6, edge);
}
