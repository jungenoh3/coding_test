#include <stdio.h>

int main(){
	int n, m, i, j, A[100][100], B[100][100];
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
}
