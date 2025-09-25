#include <queue>
#include <iostream>
#include <vector>

using namespace std;

const int INF = 987654321;

struct node {
    int x;
    int y;
    int direction;
    int cost;
};

struct compare {
    bool operator() (node a, node b) {
        return a.cost > b.cost;
    }
};

bool out_of_boundary(node n, int size){
    if (n.x < 0 || n.x >= size){
        return true;
    }
    if (n.y < 0 || n.y >= size){
        return true;
    }
    return false;
}

int solution(vector<vector<int>> board) {
    int answer = 0;
    int board_size = board.size();
    vector<vector<bool>> visited(board_size, vector<bool>(board_size, false));
    vector<vector<int>> costs(board_size, vector<int>(board_size, INF));
    vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    priority_queue<node, vector<node>, compare> q;
    
    node n = {0, 0, -1, 0};
    costs[0][0] = 0;
    
    q.push(n);
    
    while(!q.empty()){
        node curr = q.top();
        q.pop();
        
        if(visited[curr.x][curr.y]){
            continue;
        }
        
        cout << curr.x << " " << curr.y << endl;
        
        if(curr.x == board_size -1 && curr.y == board_size-1){
            break;
        }
        
        visited[curr.x][curr.y] = true;
        
        for(int i=0; i<4; i++){ // 0 1 2 3
            int cost = 0;
            
            if (curr.direction == -1){
                cost = 100;
            } else if ((curr.direction <= 1 && i <= 1) || (curr.direction >= 2 && i >= 2)){
                cost = 100;
            } else {
                cost = 500;
            }
            
            node next = {curr.x + d[i].first, curr.y + d[i].second, i, 0};
            
            if (out_of_boundary(next, board_size) || board[next.x][next.y]){
                continue;
            }
            
            next.cost = costs[next.x][next.y];
            
            if (costs[curr.x][curr.y] + cost < costs[next.x][next.y]){
                costs[next.x][next.y] = costs[curr.x][curr.y] + cost;
                next.cost = costs[curr.x][curr.y] + cost;
                cout << "next: " << next.x << " " << next.y << endl;
                cout << "next cost: " << next.cost << endl; 
                q.push(next);
            }
        }
    }
    
    return costs[board_size-1][board_size-1];
}

int main(){
	vector<vector<int>> board = {{0,0,0},{0,0,0},{0,0,0}};
	
	cout << solution(board);
}
