#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(long long int n){
	int i, limit = (int)sqrt(n);
	
	if(n == 0 || n == 1){
		return false;
	}
	
	for(i=2; i<=limit; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int t, i, j;
	long long int n;
	
	
	cin >> t;
	for(i=0; i<t; i++){
		cin >> n;
		j=0;
		while(1){
			if(isPrimeNumber(n+j)){
				cout << n+j << "\n";
				break;
			}
			j++;
		}
	}
	
	return 0;
}
