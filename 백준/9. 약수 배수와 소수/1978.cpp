#include <cstdio>

int main(){
	int n, a, i, j, count=0;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a);
		
		if(a==1){
			continue;
		}
		
		for(j=2; j<a; j++){
			printf("%d %% %d = %d\n", a, j, a%j);
			if(a%j == 0){
				break;
			}
		}
		if(a<=j){
			count++;
		}
		
		printf("\n");
		
	}
	
	printf("%d", count);
}
