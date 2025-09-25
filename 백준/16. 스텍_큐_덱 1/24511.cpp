#include <iostream>
#include <deque>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i, j, n, x, temp, input, qs[100000], m, num[100000];
	deque<int> dq;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> input; 
		qs[i] = input;
	}	
	
	for(i=0; i<n; i++){
		cin >> input;
		if(!qs[i]){
			dq.push_front(input);
		}
	}
	
	cin >> m;
	
	
	for(i=0; i<m; i++){
		cin >> input;
		num[i]=input;
	}
	
	for(i=0; i<m; i++){
		if(dq.empty()){
			cout << num[i] << " ";
		} else {
			cout << dq.front() << " ";
			dq.pop_front();
			dq.push_back(num[i]);
		}
	}
	
	
	
	return 0;
}
