#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(int n){
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
	int m, n, i;
	
	cin >> m >> n;
	
	for(i=m; i<=n; i++){
		if(isPrimeNumber(i)){
			cout << i << "\n";
		}
	}
	
	return 0;
}
