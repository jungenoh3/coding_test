#include <iostream>
#include <vector>

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
	int n, num, i, gcdNum, count=0;
	
	cin >> n;
	
	vector<int> v1(n);
	vector<int> v2(n-1);
	
	for (i=0; i<n; i++){
		cin >> v1[i];
		if(i > 0){
			v2[i-1] = v1[i] - v1[i-1];
		}
	}
	
	gcdNum = v2[0];
	for(i=1; i<n-1; i++){
		gcdNum = gcd(gcdNum, v2[i]);
	}
//	cout << "v2: ";
	for(i=0; i<n-1; i++){
		// cout << v2[i] << " ";
		
		num = v2[i]/gcdNum;
		if(num > 1){
			count += num - 1;
		}
	}
	
	cout << count;
	
}
