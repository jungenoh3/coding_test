#include <stdio.h>


int main(){
	int n, i, j, k, count=0, sign;
	char word[100];
	int alphabet[26] = {0,}; 
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%s", word);
		
		sign = 1;
		for (k=0; k<26; k++){
			alphabet[k] = 0;
		}
	
		for(j=0; word[j] !='\0'; j++){
			
			if(j > 0 && (word[j-1] != word[j]) && (alphabet[word[j] - 97] == 1)){
				printf("break point: %d\n", j);
				sign = 0;
				break;
			}
			
			if(alphabet[word[j] - 97] == 0){
				alphabet[word[j] - 97] = 1;
			}
		}
		
		if (sign){
			count++;
		}

		
	}
	
	printf("%d", count);
	 
}
