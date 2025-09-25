#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, num=1, check=1, temp;
	queue<int> q;
	
	cin >> n;
	
	while(check < n){
		check*=2;
	}
	
	cout << 2*n - check;
	
//	for(int i=1; i<=n; i++){
//		q.push(i);
//	}
//	
//	while(1){
//		if(q.size() == 1){
//			break;
//		}
//		if(check%2 == 1){
//			q.pop();
//		} else {
//			temp = q.front();
//			q.pop();
//			q.push(temp);
//		}
//		check++;
//	}
//	
//	cout << q.front();
	
	return 0;
}
