#include <stdio.h>

int main(){
	int n, x;
	int array[10000];
	
	scanf("%d %d", &n, &x);
	
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	for(int i=0; i<n; i++){
		if (array[i] < x){
			printf("%d ", array[i]);
		}
	}
}
