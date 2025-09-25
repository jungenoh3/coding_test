#include <cstdio>

int main(){
	int m, n, i, j, sum=0, min=0;
	
	scanf("%d %d", &m, &n);
	
	for(i=m; i<=n; i++){
		if(i==1){
			continue;
		}
		
		for(j=2; j<=i; j++){
			if(i%j == 0){
				break;
			}
		}
		
		if(j>=i){
			sum += i;
			if (min == 0){
				min = i;
			}
		}
		
	}
	
	if(min == 0){
		printf("-1");
	} else {
		printf("%d\n%d", sum, min);
	}
}
