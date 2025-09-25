#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int c = a * (b%10);
	
	printf("%d\n", (b/10)%10);
	int d = a * ((b/10)%10);
	int e = a * (b/100);
	
	printf("%d\n%d\n%d\n%d", c, d, e, a*b);
}
