#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b){
		printf("%d", 10000+a*1000);
	} else if (b == c){
		printf("%d", 10000+b*1000);
	} else {
		int max = 0;
		
		if (a > b){
			max = a;
		} else {
			max = b;
		}
		
		if (c > max){
			max = c;
		}
		
		printf("%d", max*100);
	}
}
