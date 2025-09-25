#include <stdio.h>

int main(){
	int array[1000] = {0,};
	int n, max=0;
	double avg = 0.0;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
		if (max < array[i]){
			max = array[i];
		}
	}
	
	for (int i=0; i<n; i++){
		avg += (((double)array[i]/max) * 100);
	}
	
	printf("%lf", avg/n);
}
