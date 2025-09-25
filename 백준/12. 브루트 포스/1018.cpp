#include <cstdio>

char board[51][51];

int paintCheck(int startI, int startJ){
	// countB=블랙 시작, countW=화이트 시작 
	int i, j, countB=0, countW=0;
	
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if((i+j)%2==0){
				if(board[startI+i][startJ+j]=='B'){
					countW++;
				} else {
					countB++;
				}
			} else {
				if(board[startI+i][startJ+j]=='B'){
					countB++;
				} else {
					countW++;
				}
			}
		}
	}
	return countW < countB ? countW : countB;
}


int main(){
	int n, m, count=3000, i, j, check;
	char c;
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++){
		scanf("%s", board[i]);
	}
	
	for(i=0; i<=n-8; i++){
		for(j=0; j<=m-8; j++){
			check = paintCheck(i, j);
			if (check < count){
				count = check;
			}

			if (count == 0){
				printf("0");
				return 0;
			}
		}
	}
	
	printf("%d", count);
	return 0;
	
}
