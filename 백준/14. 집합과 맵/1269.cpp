#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	int a, b, i, num, count=0;
	unordered_map<int, int> setAB;
	
	cin >> a >> b;
	
	for(i=0; i<a+b; i++){
		cin >> num;
		setAB[num]++;
	}
	
	for(auto iter = setAB.begin(); iter!=setAB.end(); iter++){
//		cout << iter->first << ": " << iter->second << '\n';	
		if(iter->second == 1){
			count++;
		}
	}
	
	cout << count;
}
