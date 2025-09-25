#include <stdio.h>


int main(){
	int i=0, count = 0;
	char word[100];
	
	scanf("%s", word);
	
	while(word[i] != '\0'){
		switch (word[i]){
			case 'c':
				if (word[i+1] != '\0' && (word[i+1] == '=' || word[i+1] == '-')){
					count++;
					i += 2;
					continue;
				}
				break;
			case 'd':
				if (word[i+1] != '\0'){
					if (word[i+1] == '-'){
						count++;
						i += 2;
						continue;
					}
					if (word[i+1] == 'z' && word[i+2] != '\0' && word[i+2] == '='){
						count++;
						i += 3;
						continue;
					}
				}
				break;
			case 'n':
			case 'l':
				if (word[i+1] != '\0' && word[i+1] == 'j'){
					count++;
					i += 2;
					continue;
				}
				break;
			case 's':
			case 'z':
				if (word[i+1] != '\0' && word[i+1] == '='){
					count++;
					i += 2;
					continue;
				}
				break;
		}
		count++;
		i++;
	}
	
	printf("%d", count);
}
