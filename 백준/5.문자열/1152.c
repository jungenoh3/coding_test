#include <stdio.h>

int main(){
	int count = 0;
	char s[1000001];
	
	scanf("%[^\n]s", s);
	
	
	for(int i=0; s[i]!='\0'; i++){
		if (s[i] == ' ' && (i == 0 || s[i+1] == '\0')){
			continue;
		}
		
		
		if(s[i] == ' '){
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
