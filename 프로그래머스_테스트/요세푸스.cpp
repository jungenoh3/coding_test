#include <queue>
#include <iostream>

using namespace std;

int main(){
	int n, k, i;
	queue<int> q;
	
	cin >> n >> k;
	
	for(i=0; i<n; i++){
		q.push(i+1);
	}
	
	cout << "<";
	
	i=1; 
	while(1){
		int front = q.front();
		q.pop();
		
		if((i%k) == 0){			
			if (q.empty()){
				cout << front << ">";
				break;
			} else {
				cout << front << ", ";
			}
		} else {
			q.push(front);
		}
		i++;
	}
}
