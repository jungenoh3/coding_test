#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int answer = 987654321;

vector<int> rMove = {0, 1, 0, -1};
vector<int> cMove = {1, 0, -1, 0};

bool isValid(const vector<vector<int>> &board, int r, int c){
    if (r < 0 || board.size() <= r || 
        c < 0 || board[0].size() <= c || 
        !board[r][c]){
        return false;
    }
    return true;
}

vector<pair<int, int>> canMove(const vector<vector<int>> &board, int r, int c){
    vector<pair<int, int>> v;
    for(int i=0; i<4; i++){
        if(isValid(board, r+rMove[i], c+cMove[i])){
            v.push_back({r+rMove[i], c+cMove[i]});
        }
    }
    return v;
}

void dfs(vector<vector<int>> &board, int count, bool isA, int aR, int aC, int bR, int bC){
    if((isA && !board[aR][aC]) || (!isA && !board[bR][bC])){
        answer = min(answer, count);
        return;
    }
    
    vector<pair<int, int>> v;
    if(isA){
        v = canMove(board, aR, aC);
    } else {
        v = canMove(board, bR, bC);
    }
    
    if(v.empty()){
        answer = min(answer, count);
        return;
    }
    
    if(isA){
        board[aR][aC] = 0;
    } else {
        board[bR][bC] = 0;
    }
    
    for(int i=0; i<v.size(); i++){
        if(isA){
            dfs(board, count+1, !isA, v[i].first, v[i].second, bR, bC);
        } else {
            dfs(board, count+1, !isA, aR, aC, v[i].first, v[i].second);
        }
    }
    
    if(isA){
        board[aR][aC] = 1;
    } else {
        board[bR][bC] = 1;
    }
}

int solution(vector<vector<int>> board, vector<int> aloc, vector<int> bloc) {
    
    dfs(board, 0, true, aloc[0], aloc[1], bloc[0], bloc[1]);
    
    return answer;
}

int main(){
	vector<vector<int>> board = {{1,1,1},{1,1,1},{1,1,1}};
	vector<int> aloc={1,0};
	vector<int> bloc={1,2};
	
	cout << solution(board, aloc, bloc);
}
