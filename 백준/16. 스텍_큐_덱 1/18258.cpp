#include <iostream>

const int MAX = 10000;
// const int MAX = 2000000;
using namespace std;

constexpr unsigned int HashCode(const char* str)
{
    return str[0] ? static_cast<unsigned int>(str[0]) + 0xEDB8832Full * HashCode(str + 1) : 8603;
}



int main(){
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    
    int n, num, queue[MAX], front=-1, back=-1;
    char cmd[6];
    
    cin >> n;
    
    for(int i=0; i<n; i++){
    	cin >> cmd;
    	switch(HashCode(cmd)){
    		case HashCode("push"):
    			cin >> num;
    			queue[++back] = num;
    			break;
    		case HashCode("pop"):
    			if (front == back || MAX <= front){
    				cout << -1 << "\n";
				} else {
					cout << queue[++front] << "\n";
				}
				break;
    		case HashCode("size"):
    			cout << back - front << "\n";
    			break;
    		case HashCode("empty"):
    			cout << (int)(front == back) << "\n";
    			break;
    		case HashCode("front"):
    			if(front == back || MAX <= front){
    				cout << -1 << "\n";
				} else {
					cout << queue[front+1] << "\n";
				}
				break;
    		case HashCode("back"):
    			if(front == back || MAX <= back){
    				cout << -1 << "\n";
				} else {
					cout << queue[back] << "\n";
				}
				break;
		}
	}
	
	return 0;
}
