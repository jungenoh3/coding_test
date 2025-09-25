#include <cstdio>

using namespace std;

int main(){
	int n, i, j, num, a[10000] = {0,};
	
	scanf("%d", &n);
	
	
	for(i=0; i<n; i++){
		scanf("%d", &num);
		a[num-1]++;
	}
	
	for(i=0; i<10000; i++){
		if(a[i] > 0){
			for(j=0; j<a[i]; j++){
				printf("%d\n", i+1);
			}
		}
	}
}
