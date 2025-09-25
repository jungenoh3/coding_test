#include <stdio.h>

int main(){
	int i=1, n, start=0, base, end=1;
	
	scanf("%d", &n);
	
	while(1){
		if(start<=n && n<=end){
			break;
		}
		base = 6 * i;
		start = end+1;
		end = start + base - 1;
		i++;
	}
	
	printf("%d", i);
}
