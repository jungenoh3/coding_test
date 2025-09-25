#include <iostream>
#include <vector> 

using namespace std;

vector<int> solution(vector<int> arr1, vector<int> arr2){
	vector<int> v;
	int a = 0, b = 0;
	
	while(1){
		if(a >= arr1.size()){
			for(int i=b; i < arr2.size(); i++){
				v.push_back(arr2[i]);
			}
			break;
		} else if (b >= arr2.size()) {
			for(int i=a; i < arr1.size(); i++){
				v.push_back(arr1[i]);
			}
			break;
		}
		
		if(arr1[a] < arr2[b]){
			v.push_back(arr1[a]);
			a++;
		} else {
			v.push_back(arr2[b]);
			b++;
		}
	}
	
	return v;
	
}

int main(){
	vector<int> answer = solution({1,2,3},{4,5,6});
	
	for(int i=0; i<answer.size(); i++){
		cout << answer[i] <<" ";
	}
}
