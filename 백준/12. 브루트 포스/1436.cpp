#include <cstdio>

int checkSequential(int num){
	int check = 0;
	while(num > 0){
		if (check == 3){
			break;
		}
		
		if (num % 10 == 6){
			check++;
		} else {
			check = 0;
		}
		
		num /= 10;
	}
	
	return check;
}

int main(){
	int n, num = 666, count=0;
	
	scanf("%d", &n);
	
	while(1){
		count += checkSequential(num) == 3 ? 1 : 0;
		if (count == n){
			break;
		}
		num++;
	}
	
	printf("%d", num);
}
