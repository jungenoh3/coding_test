#include <stdio.h>

int main(){	
	int i, j, k, n, x, y, count=0, paper[100][100] = {0,};
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		
		x--;
		y--;
		
		for(j=0; j<10; j++){
			for(k=0; k<10; k++){
				paper[x+j][y+k]=1;
			}
		}
	}
	
	
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			if(paper[i][j]){
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	
	
	return 0;
}
