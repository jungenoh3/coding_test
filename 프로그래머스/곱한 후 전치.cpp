#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiply(vector<vector<int>> arr1, vector<vector<int>> arr2){
	int n = arr1.size(); 
	vector<vector<int>> result(n, vector<int>(n, 0));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	
	return result;
}

vector<vector<int>> transpose(vector<vector<int>> arr){
	int n = arr.size(); 
	vector<vector<int>> result(n, vector<int>(n, 0));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			result[i][j] = arr[j][i];
		}
	}
	
	return result;
}

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2){
	vector<vector<int>> result = multiply(arr1, arr2);
	return transpose(result);
}

int main(){
	vector<vector<int>> result = solution({{1,2,3},{4,5,6},{7,8,9}},{{9,8,7},{6,5,4},{3,2,1}});
	
	for(int i=0; i<result.size(); i++){
		for(int j=0; j<result.size(); j++){
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}
}
