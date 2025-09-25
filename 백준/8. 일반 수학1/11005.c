#include <stdio.h>


int main(){
	int decimal, b, i=0, left;
	char num[2000];
	
	scanf("%d %d", &decimal, &b);
	
	while(1 < decimal){
		left = decimal % b;
		if (left > 9){
			num[i] = left + 55;
		} else {
			num[i] = left + 48;
		}
		
		i++;
		decimal /= b;
	}
	
	if (decimal > 9){
		num[i] = decimal + 55;
	} else if (0 < decimal){
		num[i] = decimal + 48;
	} else {
		i--;
	}

	
	while (0<=i){
		printf("%c", num[i]);
		i--;
	}
	
}
