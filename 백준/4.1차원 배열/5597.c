#include <stdio.h>

int main(){
	int num, i;
	int array[30] = {0,};

	for(i=0; i<28; i++){
		scanf("%d", &num);
		array[num-1] = 1;
	}
	
	for(int i=0; i<30; i++){
		if(!array[i]){
			printf("%d\n", i+1);
		}
	}
}
