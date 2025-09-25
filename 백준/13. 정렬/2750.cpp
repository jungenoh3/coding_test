#include <cstdio>

int main(){
	int n, i, j, tempIndex, tempValue, array[1000];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	for(i=0; i<n; i++){
		tempIndex = i;
		for(j=i+1; j<n; j++){
			if(array[tempIndex]>=array[j]){
				tempIndex = j;
			}
		}
		tempValue = array[i];
		array[i] = array[tempIndex];
		array[tempIndex] = tempValue;
		
	}
	
	for(i=0; i<n; i++){
		printf("%d\n", array[i]);
	}
}
