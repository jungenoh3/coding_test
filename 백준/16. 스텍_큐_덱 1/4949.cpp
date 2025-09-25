#include <iostream>
#include <cstring>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int stack[101], front, i;
	char s[101];
	
	while(1){
		front = -1;
		
		cin.getline(s, 101, '\n');		
		
		if (s[0] == '.' && s[1] == cin.eof()){
			break;
		}
		
		for(i=0; s[i] != cin.eof(); i++){
			if (s[i] == '('){ // 0
				stack[++front] = 0;
			} else if (s[i] == '['){ // 1
				stack[++front] = 1;
			} else if (s[i] == ')'){
				if(stack[front] == 0){
					front--;
					if(front < -1){
						break;
					}
				} else {
					front = 100;
					break;
				}
			} else if (s[i] == ']') { 
				if(stack[front] == 1){
					front--;
					if(front < -1){
						break;
					}
				} else {
					front = 100;
					break;
				}
			}
		}
		
		if (front == -1){
			cout << "yes" << '\n';
		} else {
			cout << "no" << '\n';
		}
		

	}
	
	return 0;
}
