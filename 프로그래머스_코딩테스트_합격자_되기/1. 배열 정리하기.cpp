#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr){
	sort(arr.begin(), arr.end());
	
	return arr;
	
}

int main(){
	vector<int> arr = {1, -5, 2, 4, 3};
	vector<int> result = solution(arr);
	
	for(int v: result){
		cout << v << " ";
	}
	return 0;
}
