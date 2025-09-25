#include <cstdio>
#include <cstdlib>

int main(){
	int x, y, w, h, min_x, min_y;
	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	min_x = x < abs(w-x) ? x : abs(w-x);
	min_y = y < abs(h-y) ? y : abs(h-y);
	printf("%d", min_x < min_y ? min_x : min_y);
}
