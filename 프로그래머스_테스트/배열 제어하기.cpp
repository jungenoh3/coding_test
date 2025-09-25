#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lst){
	sort(lst.rbegin(), lst.rend());
	auto unique_end = unique(lst.begin(), lst.end());
	vector<int> v(lst.begin(), unique_end);
	
	for (int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	
	return v;
}


int main(){
	vector<int> lst = {2, 1, 1, 3, 2, 5, 4};
	solution(lst);
}
