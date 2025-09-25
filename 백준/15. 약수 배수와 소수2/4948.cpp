#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(int n){
	int i, limit = (int)sqrt(n);
	
	if(n < 2){
		return false;
	}
	
	for(i=2; i<=limit; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n, count, i;
	
	while(1){
		cin >> n;
		if(n==0){
			break;
		}
		count = 0;
		for(i=n+1; i<=2*n; i++){
			if(isPrimeNumber(i)){
				count++;
			}
		}
		cout << count << "\n";
	}
	
	
	
	return 0;
}
