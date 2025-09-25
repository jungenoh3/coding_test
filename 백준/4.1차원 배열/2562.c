#include <stdio.h>

int main(){
	int num, max = 0, count = -1;
	
	for(int i=1; i<=9; i++){
		scanf("%d", &num);
		
		if(max < num){
			max = num;
			count = i;
		}
	}
	
	printf("%d\n%d", max, count);
}
