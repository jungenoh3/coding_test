#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
	int n, m, i, num;
	set<int> s1;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> num;
		s1.insert(num);
	}
	
	cin >> m;
	
	vector<int> v(m);
	
	for(i=0; i<m; i++){
		cin >> v[i];
	}
	
	for(i=0; i<m; i++){
		cout << s1.count(v[i]) << ' ';
	}
	
	
}
