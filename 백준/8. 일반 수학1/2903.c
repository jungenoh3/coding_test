#include <stdio.h>
#include <math.h>

int main(){
	int i, n, count=2;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		count += (int)pow(2.0, (double)i);
	}
	
	printf("%d", count*count);
	
}
