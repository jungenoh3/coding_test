#include <iostream>

using namespace std;

int main(){
	int money, answer = 0;
	int arr[] = {500, 100, 50, 10, 5, 1};
	int index = 0;
	cin >> money;
	
	int left = 1000 - money;
	
	while(left > 0){
		if(arr[index] > left){
			index++;
			continue;
		}
		
		left -= arr[index];
		answer++;
	}
	
	cout << answer;
}
