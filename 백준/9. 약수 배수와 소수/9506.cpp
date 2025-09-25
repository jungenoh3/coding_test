#include <cstdio>

int main(){
	int n, sum, i;
	
	while(1){
		scanf("%d", &n);
		
		if(n==-1){
			break;
		}
		
		sum = 0;
		for(i=1; i<=n/2; i++){
			if (n%i == 0){
				sum+=i;
			}
		}
		if (sum == n){
			printf("%d = 1", n);
			for(i=2; i<=n/2; i++){
				if (n%i == 0){
					printf(" + %d", i);
				}
			}
			printf("\n");
		} else {
			printf("%d is NOT perfect.\n", n);
		}
	}
	
	return 0;
}
