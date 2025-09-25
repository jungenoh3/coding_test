#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotate90(vector<vector<int>> arr){
	int n = arr.size();
	vector<vector<int>> newArr(n, vector<int>(n, 0));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			newArr[i][j] = arr[n-j-1][i];
		}
	}
	
	return newArr;
}

vector<vector<int>> solution(vector<vector<int>> arr, int n){
	for(int i=0; i<n; i++){
		arr = rotate90(arr);
	}
	
	return arr;
}

int main(){
	vector<vector<int>> newArr = solution({{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},2);
	
	for(int i=0; i<newArr.size(); i++){
		for(int j=0; j<newArr.size(); j++){
			cout << newArr[i][j] << " ";
		}
		cout << "\n";
	}
}
