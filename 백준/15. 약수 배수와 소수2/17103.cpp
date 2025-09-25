#include <iostream>

using namespace std;

const int MAX = 1000000;
int prime[1000001];


int countPrimaryPartition(int n){
	int i, count=0;
	
	for(i=2; i<=n/2; i++){
		if(prime[i] && prime[n-i]){
			count++;
		}
	}
	
	return count;
}

//inline void change_bool(int strt, int acc, int flag){
//    for(int i = strt; i < MAX; i += acc){
//        prime[i] = flag;
//    }
//}


int main(){
	int t, i, j, n;
	
	prime[0] = 0;
	prime[1] = 0;
	
	for(i=2; i<=MAX; i++){
		prime[i]=1;
	}
	
	for(i=2; i<=MAX; i++){
		if(prime[i]==0){
			continue;
		}
		
		for(j=i+i; j<=MAX; j+=i){
			prime[j]=0;
		}
	}
    
    
	cin >> t;
	
	for(i=0; i<t; i++){
		cin >> n;
		cout << countPrimaryPartition(n) << "\n";
	}
}
