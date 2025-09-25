#include <stdio.h>

int main(){
	int a, b, v;
	
	scanf("%d %d %d", &a, &b, &v);
	
	printf("%d", (v-a)/(a-b) + 1 + ((v-a)%(a-b) == 0 ? 0 : 1));
	
	return 0;
}
