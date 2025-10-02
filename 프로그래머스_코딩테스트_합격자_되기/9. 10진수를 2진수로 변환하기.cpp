#include <string>
#include <stack>
#include <iostream> 

using namespace std;

string solution(int decimal){
	stack<int> st;
	string answer;
	
	while(decimal > 0){
		st.push(decimal % 2);
		decimal /= 2;
	}
	// st.push(decimal);
	
	while(!st.empty()){
		answer += st.top() + '0';
		st.pop(); 
	}
	
	return answer;
}

int main(){
	cout << solution(12345);
}
