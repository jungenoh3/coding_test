#include <stdio.h>

int main(){
	int num, i, j, max=0, max_i, max_j;
	
	
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d", &num);
			if(max <= num){
				max = num;
				max_i = i;
				max_j = j;
			}
		}
	}
	
	printf("%d\n%d %d", max, max_i+1, max_j+1);
}
