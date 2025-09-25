#include <iostream>

using namespace std;

int main(){
	int n, ans=1, i;
	
	cin >> n;
	
	for(i=2; (i*i)<n; i++){
		if ((i*i) < n){
			ans++;
		}
	}
	cout << ans;

	return 0;
}
