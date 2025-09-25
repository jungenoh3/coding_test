#include <cstdio>

int main(){
	int n, i=2, j;
	
	scanf("%d", &n);
	
	if (n==1){
		return 0;
	}
	
	for(i=2; i<=n; i++){
		while(n%i==0){
			n/=i;
			printf("%d\n", i);
		}
	}
	
	
	return 0;
}
