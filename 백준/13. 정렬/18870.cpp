#include <iostream>
#include <vector>
#include <algorithm>

// https://donggoolosori.github.io/2020/09/26/boj-18870/

using namespace std;

int main(){
	int n, i, count=0;
	
	cin >> n;
	
	vector<int> v(n);
	
	for(i=0; i<n; i++){
		cin >> v[i];
	}
	
	vector<int> cv(v);
	sort(cv.begin(), cv.end());
	
	cv.erase(unique(cv.begin(), cv.end()), cv.end());
	
	
	for(i=0; i<n; i++){
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);
		cout << it - cv.begin() << ' ';
	}
}
