#include <string>
#include <vector>
#include <iostream>

using namespace std;

string answer = "zzzz";
int xArr[] = {1, -1, 0, 0};
int yArr[] = {0, 0, 1, -1};
char cArr[] = {'d', 'u', 'r', 'l'};

int nSize, mSize, goalX, goalY;


void bfs(vector<vector<bool>> &v, int currX, int currY, int step, int k, string currCommand){
    if(step >= k){
        if(currX == goalX && currY == goalY){
            answer = min(currCommand, answer);
        }
        return;
    }
    
    for(int i=0; i<4; i++){
        int nextX = currX + xArr[i];
        int nextY = currY + yArr[i];
        if(1 <= nextX && nextX <= nSize && 1 <= nextY && nextY <= mSize && !v[nextX][nextY]){
            v[nextX][nextY] = true;
            bfs(v, nextX, nextY, step+1, k, currCommand + cArr[i]);
            v[nextX][nextY] = false;
        }
    }
}

string solution(int n, int m, int x, int y, int r, int c, int k) {
    vector<vector<bool>> v(n+1, vector<bool>(m+1, false));
    
    v[x][y] = true;
    
    nSize = n;
    mSize = m;
    goalX = r;
    goalY = c;
    
    bfs(v, x, y, 0, k, "");
    
   
    return answer == "zzzz" ? "impossible" : answer;
}

int main(){
	
	cout << solution(3, 4, 2, 3, 3, 1, 5);
	
	return 0;
}
