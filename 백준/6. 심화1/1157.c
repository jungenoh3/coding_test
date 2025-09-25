#include <stdio.h>

int main(){
	char word[1000000];
	int alphabet[26] = {0,};
	int i, len;
	int max =0, max_index=-1;
	
	fread(word, 1, 1000000, stdin);
	
	for(i=0; word[i]!='\0'; i++){
		if (word[i] >= 'A' && word[i] <= 'Z'){
			word[i]+=32;	
		}
		alphabet[word[i]-97]++;
	}
	
	for (i=0; i<26; i++){
		if (max < alphabet[i]){
			max = alphabet[i];
			max_index = i;
		} else if (max == alphabet[i]){
			max_index = -2;
		}
	}
	
	printf("%c", max_index+65);
}
