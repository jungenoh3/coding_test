#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
	int n, m, i;
	string name;
	unordered_map<string, int> map;
	vector<string> v;
	
	cin >> n >> m;
	
	for(i=0; i<n; i++){
		cin >> name;
		map[name]++;
	}
	
	for(i=0; i<m; i++){
		cin >> name;
		map[name]++;
		if(map[name] == 2){
			v.push_back(name);
		}
	}
	
	sort(v.begin(), v.end());
	
	cout << v.size() << '\n';
	for(i=0; i<v.size(); i++){
		cout << v[i] << '\n';
	}
}
