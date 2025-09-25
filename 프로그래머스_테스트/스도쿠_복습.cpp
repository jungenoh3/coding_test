#include <iostream>
#include <vector>

using namespace std; 

bool solved = false;

vector<int> candidate(int a, int b, const vector<vector<int>> &sdoku){
	vector<bool> numbers(10, true);
	
	for(int i=0; i<9; i++){
		numbers[sdoku[a][i]] = false;
		numbers[sdoku[i][b]] = false;
	}
	
	int startA = (a/3)*3;
	int startB = (b/3)*3;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			numbers[sdoku[startA+i][startB+j]] = false;
		}
	}
	
	vector<int> checked;
	
	for(int i=1; i<10; i++){
		if(numbers[i]){
			checked.push_back(i);
		}
	}
	
	return checked;
}


void dfs(int index, const vector<vector<int>> &problem, vector<vector<int>> &sdoku){
	if(index == problem.size()){
		for(int i=0; i<9; i++){
			for(int j=0; j<9; j++){
				cout << sdoku[i][j] << " ";
			}
			cout << "\n";
		}
		solved = true;
		return;
	}
	
	if(solved){
		return;
	}
	
	int a = problem[index][0];
	int b = problem[index][1];
		
	vector<int> cands = candidate(a, b, sdoku);
		
	if(cands.empty()){
		return;
	}
		
	for(int i=0; i<cands.size(); i++){
		sdoku[a][b] = cands[i];
		dfs(index+1, problem, sdoku);
		sdoku[a][b] = 0;
	}
}


int main(){
	vector<vector<int>> sdoku(9, vector<int>(9, 0));
	vector<vector<int>> problem;
	
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin >> sdoku[i][j];
			if(sdoku[i][j] == 0){
				problem.push_back({i, j});
			}
		}
	}
	
	dfs(0, problem, sdoku);
}
