#include <cstdio>

int card[100], visited[100] = {0,};

int getSum(int n){
	int sum = 0;
	
	for(int i=0; i<n; i++){
		if(visited[i]){
			// printf("%d, ", card[i]);
			sum += card[i];
		}
	}
	// printf("\n");
	return sum;
}

void comb(int start, int n, int r, int m, int* sum){
	// printf("comb is called with start: %d and r: %d\n", start, r);
	// count++;
	
	if(r==0){
		int result = getSum(n);
		if(*sum <= result && result <= m){
			*sum = result;
		}
        return;
	}
	
	for(int i=start; i<n; i++){
		// printf("start=%d looping i: %d\n", start, i);
		visited[i]=1;
		comb(i+1, n, r-1, m, sum);
		visited[i]=0;
	}
}

int main(){
	int n, m, i, sum =0;
	
	scanf("%d %d", &n, &m);

	for(i=0; i<n; i++){
		scanf("%d", &card[i]);
	}
	
	comb(0, n, 3, m, &sum);
	
	printf("%d\n", sum);
	
	
	// printf("count: %d", count);
}
