#include <stdio.h>

int main(){
	int num, i;
	int array[42] = {0,};

	for(i=0; i<10; i++){
		scanf("%d", &num);
		array[(num % 42)] = 1;
	}
	
	num = 0;
	for(int i=0; i<42; i++){
		if(array[i]){
			num++;
		}
	}
	
	printf("%d", num);
}
