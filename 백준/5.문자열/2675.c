#include <stdio.h>

int main(){
	int t, r, i, j, k;
	char s[21];
	
	scanf("%d", &t);
	
	for(i=0; i<t; i++){
		scanf("%d %s", &r, s);
		
		for(j=0; s[j]!='\0'; j++){
			for(k=0; k<r; k++){
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
