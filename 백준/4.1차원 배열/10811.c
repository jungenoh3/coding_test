#include <stdio.h>

int main(){
	int n, m, i, j, k, temp;
	int array[100] = {0,};
	
	scanf("%d %d", &n, &m);
	
	for (k=0; k<n; k++){
		array[k] = k+1;
	}
	
	for(k=0; k<m; k++){
		
		scanf("%d %d", &i, &j);
		
		for (int l=0; l<(j-i+1)/2; l++){
			temp = array[i-1+l];
			array[i-1+l] = array[j-l-1];
			array[j-l-1] = temp;
		}
		printf("array: ");
			for (int z=0; z<n; z++){
				printf("%d ", array[z]);
			}
		printf("\n");
		
	}
	
	for (k=0; k<n; k++){
		printf("%d ", array[k]);
	}
}
