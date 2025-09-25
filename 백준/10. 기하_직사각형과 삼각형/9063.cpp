#include <cstdio>

int main(){
	int n, i, a, b, minX=0, minY=0, maxX=0, maxY=0;
	
	scanf("%d", &n);
	
	scanf("%d %d", &a, &b);
	minX = maxX = a;
	minY = maxY = b;
	
	for(i=1; i<n; i++){
		scanf("%d %d", &a, &b);
		
		minX = a < minX ? a : minX;
		maxX = maxX < a ? a : maxX;
		minY = b < minY ? b : minY;
		maxY = maxY < b ? b : maxY;
	}
	
	printf("%d", (maxX - minX) * (maxY - minY));
}
