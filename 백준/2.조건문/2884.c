#include <stdio.h>

int main(){
	int hour, minutes;
	scanf("%d %d", &hour, &minutes);
	
	minutes=minutes-45;
	if (minutes < 0){
		hour--;
		minutes = 60 + minutes;
		
		if (hour < 0){
			hour = 23;
		}
	}
	
	printf("%d %d", hour, minutes);
}
