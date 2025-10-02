#include <vector>
#include <string>
#include <stack>
#include <iostream> 

using namespace std;

bool solution(string s){
	stack<char> st;
	
	for(char c : s){
		if(c ==')'){
			if(!st.empty()){
				st.pop();
			}
			continue;
		}
		st.push(c);
	}
	
	return st.empty();
} 
 
int main(){
	cout << solution("((())()");
}
