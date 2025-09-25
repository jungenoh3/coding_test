#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, a;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &n);
	
	
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if (a < min){
			min = a;
		}
		if (max < a){
			max = a;
		}
	}
	
	printf("%d %d", min, max);
}
