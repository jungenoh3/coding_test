#include <stdio.h>

int main(){	
	char words[5][15];
	int skip[5] = {0,};
	int i, j;
	
	for(i=0; i<5; i++){
		scanf("%s", words[i]);
	}
	
	for(i=0; i<15; i++){
		for(j=0; j<5; j++){
			if(words[j][i] == '\0'){
				skip[j]=1;
			}
			
			if(!skip[j]){
				printf("%c", words[j][i]);
			}
		}
	}

	
	return 0;
}
