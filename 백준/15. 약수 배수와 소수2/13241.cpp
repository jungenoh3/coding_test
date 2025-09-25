#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b){
	long long int c;
	while(b){
		c = a%b;
		// cout << "gcd: " << a << " % " << b << " = " << c << '\n';
		a = b;
		b = c;
	}
	return a;
}

int main(){
	long long int a, b, gcdNum;
	
	cin >> a >> b;
	if(a==1 || b==1){
		cout << a*b << '\n';
	} else {
		gcdNum = gcd(a, b);
		cout << gcdNum*(a/gcdNum)*(b/gcdNum);
	}
}
