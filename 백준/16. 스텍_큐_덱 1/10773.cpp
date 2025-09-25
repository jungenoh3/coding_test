#include <iostream>

using namespace std;

int main(){
	int stack[100000];
	int k, i, n, front=0, sum=0;
	
	cin >> k;
	
	for(i=0; i<k; i++){
		cin >> n;
		if(n == 0){
			front--;
			continue;
		}
		stack[front] = n;
		front++;
	}
	
	for(i=0; i<front; i++){
		sum += stack[i];
	}
	
	cout << sum;
}
