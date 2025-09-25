#include <iostream>
#include <string>

using namespace std; 

string solution(string s){
	int alphabet[26] = {0,};
	
	for(int i=0; i<s.size(); i++){
		alphabet[s[i] - 'a']++;
	}
	
	string sr = "";
	for(int i=0; i<26; i++){
		sr += string(alphabet[i], i+'a');
	}
	
	return sr;
}

int main(){
	cout << solution("hello");
}
