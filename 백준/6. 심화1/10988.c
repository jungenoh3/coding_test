#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	int i, len;
	
	scanf("%s", word);
	len = strlen(word);
	
	for(i=0; i<len/2; i++){
		if (word[i] != word[len-1-i]){
			printf("0");
			return 0;
		}
	}
	
	printf("1");

}
