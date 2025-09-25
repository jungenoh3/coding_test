#include <stdio.h>

int main(){
	int n, m, i, j, k;
	int array[100] = {0,};
	
	scanf("%d %d", &n, &m);
	
	for(int l=0; l<m; l++){
		scanf("%d %d %d", &i, &j, &k);
		
		for (int m=i-1; m<j; m++){
			array[m] = k;
		}
	}
	
	for(int l=0; l<n; l++){
		printf("%d ", array[l]);
	}
}
