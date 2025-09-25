#include <stdio.h>

int main(){
	int n, i, j, start, end, a, b;
	
	scanf("%d", &n);
	
	start = 1;
	end = 1;
	i = 1;
	while(1){
		if(start <= n && n <= end){
			break;
		}
		start += i;
		i++;
		end += i;	
	}
	
	j = -(start - n) + 1;
	
	if(i%2 == 0){
		printf("%d/%d", j, i-j+1);
	} else {
		printf("%d/%d", i-j+1, j);
	}
	
	
}
