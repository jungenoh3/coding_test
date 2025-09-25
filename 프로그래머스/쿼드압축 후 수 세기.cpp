#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> dfs(const vector<vector<int>> &arr, int size, int x, int y){
    vector<vector<int>> offsets = {{x, y}, {x+size, y}, {x, y+size}, {x+size, y+size}};
    vector<int> result(2, 0);
    int one = 0; int zero = 0;
    
    for(int i=0; i<4; i++){
        result[0] = 0;
        result[1] = 0;
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++){
                result[arr[offsets[i][0]+j][offsets[i][1]+k]]++;
            }
        }
        if(result[0] == 0){
            one++;
        } else if (result[1] == 0){
            zero++;
        } else {
            vector<int> v = dfs(arr, size/2, offsets[i][0], offsets[i][1]);
            zero += v[0];
            one += v[1];
        }
    }
    
    return {zero, one};
}


vector<int> solution(vector<vector<int>> arr) {
    if(arr.size() == 1){
        if(arr[0][0] == 1){
            return {0, 1};
        } else {
            return {1, 0};
        }
    }
    
    vector<int> v = dfs(arr, arr.size()/2, 0, 0);

    return v;
}

int main(){
	vector<vector<int>> a = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
	vector<int> v = solution(a);
	
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	
	return 0;
}
