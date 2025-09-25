#include <stdio.h>

int main(){
	int n, v;
	int count = 0;
	int array[100];
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	scanf("%d", &v);
	
	for(int i=0; i<n; i++){
		if (array[i] == v){
			count++;
		}
	}
	
	printf("%d", count);
}
