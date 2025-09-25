#include <cstdio>

int main(){
	int a, b, c, max, sum;
	
	while(1){
		scanf("%d %d %d", &a, &b, &c);
		
		if(a == 0 && b==0 && c==0){
			break;
		}
		
		
		if (b+c<=a || a+c<=b || a+b<=c){
			printf("Invalid\n");
		} else {
			if (a==b && b==c && a==c){
				printf("Equilateral\n");
			} else if(a==b || b==c || a==c){
				printf("Isosceles\n");
			} else {
				printf("Scalene\n");
			}
		}

	}

}
