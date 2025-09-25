#include <iostream>

using namespace std;

int gcd(int a, int b){
	int c;
	while(b){
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int main(){
	int a1, b1, a2, b2, a3, b3;
	
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	
	int gcdNum = gcd(b1, b2);
	a3 = a1*(b2/gcdNum) + a2*(b1/gcdNum);
	b3 = gcdNum*(b1/gcdNum)*(b2/gcdNum);
	
	gcdNum = gcd(a3, b3);
	
	cout << a3/gcdNum << ' ' << b3/gcdNum;
	
	return 0;
}
