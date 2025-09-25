#include <iostream>
#include <string>

using namespace std;

int main(){
	int t, front;
	string s;
	
	cin >> t;
	
	for(int i=0; i<t; i++){
		
		cin >> s;
		
		front = -1;
		for(int j=0; j<s.size(); j++){
			if(s[j] == '('){
				front++;
			}
			if (s[j] == ')'){
				front--;
				if (front < -1){
					break;
				}
			}
		}
		
		if (front == -1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	
	
	
	
	return 0;
}
