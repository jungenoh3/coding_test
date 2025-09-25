#include <cstdio>

int main(){
	int n, m, i, j, k, card[100], sum=0, res=0;
	
	scanf("%d %d", &n, &m);

	for(i=0; i<n; i++){
		scanf("%d", &card[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			for(k=j+1; k<n; k++){
				printf("i: %d, j: %d, k: %d \n", i, j, k);
				
				res = card[i] + card[j] + card[k];
				
				if(sum <= res && res <= m){
					sum = res;
				}
				
				if (res == m){
					// break;
				}
			}
		}
	}
	
	printf("%d", sum);
}
