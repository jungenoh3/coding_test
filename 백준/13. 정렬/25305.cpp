#include <cstdio>

int main(){
	int i, j, tempIndex, tempValue, n, k, array[1000];
	
	scanf("%d %d", &n, &k);
	
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	for(i=0; i<n; i++){
		tempIndex = i;
		for(j=i+1; j<n; j++){
			if(array[tempIndex]<=array[j]){
				tempIndex = j;
			}
		}
		tempValue = array[i];
		array[i] = array[tempIndex];
		array[tempIndex] = tempValue;
		
		if(i==k-1){
			printf("%d", array[i]);
			return 0;
		}
	}

}
