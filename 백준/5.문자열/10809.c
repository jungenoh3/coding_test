#include <stdio.h>
#include <string.h>

int main(){
	char s[101];
	int pos[26];
	int i;
	
	scanf("%s", s);
	
	memset(pos, -1, sizeof(int)*26);

	
	for(i=0; s[i] != '\0'; i++){
		if(pos[s[i]-97] == -1){
			pos[s[i]-97] = i;
		}
	}
	
	for(i=0; i<26; i++){
		printf("%d ", pos[i]);
	}

}
