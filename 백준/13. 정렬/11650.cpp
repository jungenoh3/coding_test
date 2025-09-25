#include <cstdio>
#include <algorithm>

using namespace std;

class point{
	public: int x;
	public: int y;
};

bool compare(point a, point b){
	if (a.x < b.x){
		return true;
	} else if (a.x==b.x){
		return a.y < b.y;
	}
	return false;
}


int main(){
	int n, i;
	point a[100000];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	
	sort(a, a+n, compare);
	
	for(i=0; i<n; i++){
		printf("%d %d\n", a[i].x, a[i].y);
	}
}
