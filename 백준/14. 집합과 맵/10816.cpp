#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, i, num;
	unordered_map<int, int> map;
	
	cin >> n;
	for(i=0; i<n; i++){
		cin >> num;
		map[num]++;
	}
	
	cin>> m;
	for(i=0; i<m; i++){
		cin >> num;
		cout << map[num] << ' ';
	}
	
	
	return 0;
}
