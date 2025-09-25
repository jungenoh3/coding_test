#include <cstdio>

int main(){
	int a, b, c, sum = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(b+c<=a){
		sum = b + c + b + c -1;
	} else if (a+c<=b) {
		sum = a + c + a + c -1;
	} else if (a+b<=c) {
		sum = a + b + a + b -1;
	} else {
		sum = a + b + c;
	}
	
	printf("%d", sum);

}
