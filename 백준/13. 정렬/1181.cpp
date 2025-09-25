#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
	if (a.length() < b.length()){
		return true;
	} else if (a.length() == b.length()){
		return a.compare(b) < 0;
	} 
	return false;
}

int main(){
	int n, i;
	string s;
	vector<string> a;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> s;
		a.push_back(s);
	}
	
	sort(a.begin(), a.end(), compare);
	
	a.erase(unique(a.begin(), a.end()),a.end());
	
	for(i=0; i<a.size(); i++){
		cout << a[i] << '\n';
	}
}
