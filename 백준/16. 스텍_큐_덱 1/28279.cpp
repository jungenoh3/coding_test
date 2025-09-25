#include <iostream>
#include <deque>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, cmd, input;
	deque<int> dq;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> cmd;
		
		switch(cmd){
			case 1:
				cin >> input;
				dq.push_front(input);
				break;
			case 2:
				cin >> input;
				dq.push_back(input);
				break;
			case 3:
				if (dq.size() == 0){
					cout << "-1\n";
				} else {
					cout << dq.front() << "\n";
					dq.pop_front();
				}
				break;
			case 4:
				if (dq.size() == 0){
					cout << "-1\n";
				} else {
					cout << dq.back() << "\n";
					dq.pop_back();
				}
				break;
			case 5:
				cout << dq.size() << "\n";
				break;
			case 6:
				cout << (int)(dq.empty()) << "\n";
				break;
			case 7:
				if(dq.empty()){
					cout << "-1\n";
				} else {
					cout << dq.front() << "\n";
				}
				break;
			case 8:
				if(dq.empty()){
					cout << "-1\n";
				} else {
					cout << dq.back() << "\n";
				}
				break;
		}
	}
	
}
