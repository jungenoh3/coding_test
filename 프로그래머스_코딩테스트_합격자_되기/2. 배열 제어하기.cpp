#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lst){
	sort(lst.rbegin(), lst.rend());
	auto newEnd = unique(lst.begin(), lst.end());
	vector<int> newLst(lst.begin(), newEnd);

	return newLst;
}

int main(){
	vector<int> lst = {4, 2, 2, 1, 3, 4};
	vector<int> result = solution(lst);
	
	for(int v: result){
		cout << v << " ";
	}
	return 0;
}
