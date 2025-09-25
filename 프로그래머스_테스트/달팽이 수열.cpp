#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n){
	vector<vector<int>> result(n, vector<int>(n, 0));
	int num = 1;
	
	int start_row = 0, end_row = n-1;
	int start_col = 0, end_col = n-1;
	
	while(start_row <= end_row && start_col <= end_col){
		for(int i=start_col; i<=end_col; i++){
			result[start_row][i] = num++;
		}
		start_row++;
		
		for(int i=start_row; i<=end_row; i++){
			result[i][end_col] = num++;
		}
		end_col--;
		
		if (start_row <= end_row){
			for(int i=end_col; i >= start_col; i--){
				result[end_row][i] = num++;
			}
			end_row--;
		}
		
		if (start_col <= end_col){
			for(int i=end_row; i >= start_row; i--){
				result[i][start_col] = num++;
			}
			start_col++;
		}
	}
	
	return result;
}

int main(){
	int n = 4;
	vector<vector<int>> result = solution(n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}
