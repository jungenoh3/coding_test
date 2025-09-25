#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, i, num;
	unordered_map<int, string> map1;
	unordered_map<string, int> map2;
	string word;
	
	cin >> n >> m;
	
	for(i=0; i<n; i++){
		cin >> word;
		map1[i+1] = word;
		map2[word] = i+1;
	}
	
	for(i=0; i<m; i++){
		cin >> word;
		num = atoi(word.c_str());
		
		if(num!=0){
			cout << map1[num] << '\n';
		} else {
			cout << map2[word] << '\n';
		}
	}
}
