#include <iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int stack[1000000];
	int n, cmd, num, front = -1;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> cmd;
		
		switch (cmd){
			case 1:
				cin >> num;
				stack[++front] = num;
				break;
			case 2:
				if (front <= -1){
					cout << -1 << '\n';
				} else {
					cout << stack[front--] << '\n';
				}
				break;
			case 3:
				cout << front+1 << '\n';
				break;
			case 4:
				if (front <= -1){
					cout << 1 << '\n';
				} else {
					cout << 0 << '\n';
				}
				break;
			case 5:	
				if (front <= -1){
					cout << -1 << '\n';
				} else {
					cout << stack[front] << '\n';
				}
				break;
		}
	}
	
	return 0;
}
