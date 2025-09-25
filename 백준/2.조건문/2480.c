#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);


	if ((a == b) && (b == c)){
		printf("%d", 10000+a*1000);
	} else if ((a == b) || (a == c)){
		printf("%d", 1000+a*100);
	} else if (b == c){
		printf("%d", 1000+b*100);
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
