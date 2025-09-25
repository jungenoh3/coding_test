#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool solved = false;

vector<int> get_candidates(int x, int y, const vector<vector<int>> &v){
	vector<bool> num(10, true);
	vector<int> result;
	
	for(int i=0; i<9; i++){
		num[v[x][i]] = false;
	}
	for(int i=0; i<9; i++){
		num[v[i][y]] = false;
	}
	int start_x = (x/3) * 3; // 3 했다가 안했다가 했음 
	int start_y = (y/3) * 3;
	
	for(int i=start_x; i<start_x+3; i++){
		for(int j=start_y; j<start_y+3; j++){
			num[v[i][j]] = false;
		}
	}
	
	
	for(int i=1; i<10; i++){
		if(num[i]){
			result.push_back(i);
		}
	}
	
	return result;
}

void sdoku(int curr, vector<vector<int>> &empty_pos, vector<vector<int>> v){
	if (curr >= empty_pos.size()){
		for(int i=0; i<9; i++){
			for(int j=0; j<9; j++){
				cout << v[i][j] << " ";
			}
			cout << "\n";
		}
		solved = true;
		return;
	}
	
	if(solved) return;
	
	int x = empty_pos[curr][0];
	int y = empty_pos[curr][1];
	
	
	vector<int> result = get_candidates(x, y, v);
	if(result.empty()) return;
	
	for(int i=0; i<result.size(); i++){
		v[x][y] = result[i];
		sdoku(curr+1, empty_pos, v);
		if (solved) return; // 추가 
		v[x][y] = 0; // 추가 
	}
}


int main(){
	vector<vector<int>> v(9, vector<int>(9));
	vector<vector<int>> empty_pos;
	
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin >> v[i][j];
			if(v[i][j] == 0){
				empty_pos.push_back({i, j});
			}
		}
	}
	
	sdoku(0, empty_pos, v);

	
}
