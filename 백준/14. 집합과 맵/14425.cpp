#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(){
	int i, n, m, sum=0;
	set<string> s;
	string word;
	
	cin >> n;
	cin >> m;
	
	vector<string> v(m);
	
	for(i=0; i<n; i++){
		cin >> word;
		s.insert(word);
	}
	
	for(i=0; i<m; i++){
		cin >> v[i];
	}
	
	
	for(i=0; i<m; i++){
		if(s.count(v[i])){
			sum++;
		}
	}
	
	cout << sum;
}
