#include <cstdio>

int main(){
	int a, b, c, d, e, f, i, j;
	
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	
	for(i=-999; i<=999; i++){
		for(j=-999; j<=999; j++){
			if((a*i + b*j == c) && (d*i + e*j == f)){
				printf("%d %d", i, j);
				return 0;
			}
		}
	}
	
	
}
