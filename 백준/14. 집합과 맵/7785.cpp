#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	int n, i;
	string name;
	string state;
	
	set<string, greater<string>> s;
	set<string>::iterator iter;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> name >> state;
		
		if(state.compare("enter") == 0){
			s.insert(name);
		} else if (s.count(name)) {
			s.erase(s.find(name));
		}
	}
	
	for(iter=s.begin(); iter!=s.end(); iter++){
		cout << *iter << '\n';	
	}
	
	
}
