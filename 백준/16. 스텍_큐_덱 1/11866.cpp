#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, k, temp, i=1;
	queue<int> q;
	
	cin >> n >> k;
	
	for(int i=0; i<n; i++){
		q.push(i+1);
	}
	
	cout << "<";
	
	while(!q.empty()){
		if(i%k == 0){
			temp = q.front();
			cout << temp;
			q.pop();
			if(!q.empty()) {
				cout << ", ";
			}
		} else {
			temp = q.front();
			q.pop();
			q.push(temp);
		}
		
		i++;
	}
	
	cout << ">";
	
	return 0;
}
