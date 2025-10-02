#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool validOffset(int x, int y){
    return 0 <= x && x < 11 && 0 <= y && y < 11;
}

int solution(string dirs) {
    int answer = 0;
    vector<vector<vector<int>>> matrix(11, vector<vector<int>>(11, vector<int>(4, 0)));
    vector<int> xDir = {-1, 1, 0, 0};
    vector<int> yDir = {0, 0, 1, -1};
    unordered_map<char, int> um = {{'U', 0}, {'D', 1}, {'R', 2}, {'L', 3}};
    int x = 5, y = 5;
    
    for(char direction: dirs){
        int idx = um[direction];
        
        if(!validOffset(x + xDir[idx], y + yDir[idx])){
            continue;
        }
        
        if(idx % 2 == 0){
            matrix[x][y][idx+1] = 1;
        } else {
            matrix[x][y][idx-1] = 1;
        }
        
        x += xDir[idx];
        y += yDir[idx];
        
        if(matrix[x][y][idx] == 0){
            answer++;
            matrix[x][y][idx] = 1;
        }
    }
    
    return answer;
}
