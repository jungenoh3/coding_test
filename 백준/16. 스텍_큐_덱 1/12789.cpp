#include <iostream>

using namespace std;

int main(){
	int n, t, j, line[1000], stack[1000], treatNum = 1, front = -1;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> line[i];
	}
	
	j = 0;
	while(1){
		if(j<n && line[j] == treatNum){
			j++;
			treatNum++;
		} else if(-1 < front && stack[front] == treatNum) {
			front--;
			treatNum++;
		} else if (j<n){
			stack[++front] = line[j++];
		} else {
			break;
		}
	}
	
	
//	 cout << treatNum << " " << front;

	
	if(treatNum == n+1 && front == -1){
		cout << "Nice";
	} else {
		cout << "Sad";
	}
	
	return 0;
}
