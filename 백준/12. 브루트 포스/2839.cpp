#include <cstdio>

int main(){
	int n, i, j, min=5000;
	
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
		for(j=0; j<=n; j++){
			if ((3*i + 5*j == n) && (i+j < min)){
				min = i+j;
			}
		}
	}
	
	if(min == 5000){
		printf("-1");
	} else {
		printf("%d", min);
	}
	
}
