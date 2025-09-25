#include <iostream>

using namespace std;

int gcd(int a, int b){
	int c;
	while(b){
		c = a%b;
		cout << "gcd: " << a << " % " << b << " = " << c << '\n';
		a = b;
		b = c;
	}
	return a;
}

int main(){
	int t, a, b, i, gcdNum;
	
	cin >> t;
	
	for(i=0; i<t; i++){
		cin >> a >> b;
		if(a==1 || b==1){
			cout << a*b << '\n';
		} else {
			gcdNum = gcd(a, b);
			cout << gcdNum*(a/gcdNum)*(b/gcdNum) << '\n';
		}
		
	}
}
