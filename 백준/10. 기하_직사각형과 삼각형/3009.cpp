#include <cstdio>

int main(){
	int a,b,x=0,y=0;
	
	for(int i=0; i<3; i++){
		scanf("%d%d",&a,&b);
		x^= a,y^=b;
		printf("%d %d\n", x, y);
	}
	
	printf("%d %d",x,y);
}
