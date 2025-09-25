#include <cstdio>

int main(){
	int i, n, nCopy, count=0, start, sum, a;
	
	scanf("%d", &n);
	
	nCopy = n;
	
	while(nCopy > 0){
		nCopy = nCopy/10;
		count++;
	}
	
	start=n-(count*9);
	
	for(i=start; i<n; i++){
		sum = i;
		a = i;
		
		while(a > 0){
			sum+=a%10;
			a/=10;
		}
		
		if(sum == n){
			break;
		}
	}
	
	if(i==n){
		printf("0");
		return 0;
	}
	
	printf("%d", i);
	
	
}
