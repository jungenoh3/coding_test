#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

int answer = 0;

bool candidate(int column, int curr, vector<int> &rows){
    for(int i=0; i<curr; i++){
        if(rows[i]==column || (abs(i-curr)==abs(rows[i]-column))){
            return false;
        }
    }
    return true;
}

void placeRows(int idx, int n, vector<int> &rows){
    if(idx==rows.size()){
    	for(int i=0; i<n; i++){
    		cout << rows[i] << " ";
		}
		cout << endl;
        answer++;
        return;
    }
    
    for(int i=0; i<n; i++){
        if(candidate(i, idx, rows)){
            rows[idx]=i;
            placeRows(idx+1, n, rows);
            rows[idx]=-1;
        }
    }
    return;
}

int solution(int n) {
    vector<int> rows(n, -1);
    placeRows(0, n, rows);
    
    return answer;
}

int main(){
	solution(4);
	
	return 0; 
}
