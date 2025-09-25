#include <stdio.h>

int main(){
	int n, m, i, j, temp;
	int array[100] = {0,};
	
	scanf("%d %d", &n, &m);
	
	
	for (int k=0; k<n; k++){
		array[k] = k+1;
	}
	
	for(int k=0; k<m; k++){
		scanf("%d %d", &i, &j);
		
		temp = array[i-1];
		array[i-1] = array[j-1];
		array[j-1] = temp;
	}
	
	for(int k=0; k<n; k++){
		printf("%d ", array[k]);
	}
}
