#include <cstdio>

int main(){
	int i, j, tempIndex, tempValue, array[5], sum=0;
	
	for(i=0; i<5; i++){
		scanf("%d", &array[i]);
		sum += array[i];
	}
	
	for(i=0; i<5; i++){
		tempIndex = i;
		for(j=i+1; j<5; j++){
			if(array[tempIndex]>=array[j]){
				tempIndex = j;
			}
		}
		tempValue = array[i];
		array[i] = array[tempIndex];
		array[tempIndex] = tempValue;
	}
	
	printf("%d\n%d", sum/5, array[2]);
} 
