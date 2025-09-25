#include <stdio.h>

int main(){
	int b, i, decimal=0;
	char num[104];
	
	scanf("%s %d", num, &b);
	
	
	for(i=0; num[i]!='\0'; i++){
		decimal *= b;
		if (num[i] >= 65){
			decimal += num[i]-55;
		} else {
			decimal += num[i]-48;
		}
	}
	
	printf("%d", decimal);
}
