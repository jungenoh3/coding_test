#include <iostream>
#include <deque>
#include<utility>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i, j, n, num, order=1;
	pair<int, int> temp;
	deque<pair<int, int>> dq;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> num;
		dq.push_back(make_pair(i+1, num));
	}
	
	for(i=0; i<n; i++){
		if(order>0){
			for(j=1; j<order; j++){
					temp = dq.front();
					dq.pop_front();
					dq.push_back(temp);
			}
			order = dq.front().second;
			cout << dq.front().first << " ";
			dq.pop_front();
		} else {
			for(j=1; j<-order; j++){
				temp = dq.back();
				dq.pop_back();
				dq.push_front(temp);
			}
			order = dq.back().second;
			cout << dq.back().first << " ";
			dq.pop_back();
		}

	}
	
	
	return 0;
}
