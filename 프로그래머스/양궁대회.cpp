#include <string>
#include <vector>
#include <iostream>

using namespace std;

int currScore = -1;
vector<int> answer(11, 0);

int totalScore(const vector<int> &apeach, const vector<int> &lion){
    int apeachScore = 0;
    int lionScore = 0;
    
    for(int i=0; i<11; i++){
    	if(apeach[i] == 0 && lion[i] == 0) continue; // ÀÌ°É »©¸Ô¾ú´Ù!!! 
        if(apeach[i] >= lion[i]){
            apeachScore += 10-i;
        } else {
            lionScore += 10-i;
        }
    }
    if (apeachScore >= lionScore){
        return -1;
    } else {
        return lionScore - apeachScore;
    }
}

void dfs(int n, const vector<int> &apeach, vector<int> &lion){
	if (n==0){
        int score = totalScore(apeach, lion);
        if(score != -1 && currScore <= score){
            currScore = score;
            for (int i=0; i<11; i++)
                answer[i] = lion[i];
        }
        return;
    }
    
    for (int i=0; i<11; i++){
        lion[i]++;
        dfs(n-1, apeach, lion);
        lion[i]--;
    }
}

vector<int> solution(int n, vector<int> info) {
    vector<int> lion(11, 0);
    dfs(n, info, lion);
    
    if (currScore == -1){
    	return {-1};
	} 
	return answer;
}

int main(){
	vector<int> info = {2,1,1,1,0,0,0,0,0,0,0};
	vector<int> answer = solution(5, info);
	
	for(int i=0; i<answer.size(); i++){
		cout << answer[i] << " ";
	}
}
