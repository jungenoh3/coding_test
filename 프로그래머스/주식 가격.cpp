#include <stack>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);
    stack<pair<int, int>> st;
    
    for(int i=0; i<prices.size(); i++){
        pair<int, int> p(i, prices[i]);
        
        cout << "prices[" << i << "]=" << prices[i] << "\n"; 
        
        cout << "[" << i << "]: ";
        if (st.empty()){
            st.push(p);
        } else {
            stack<pair<int, int>> copy(st);
            for(int j=0; j<st.size(); j++){
                pair<int, int> t = copy.top();
                answer[t.first]++;
                cout << t.first << " ";
                copy.pop();
            }
            
            if (st.top().second <= prices[i]){
                st.push(p);
            } else {
                while(st.top().second > prices[i]){
                    st.pop();
                }
                st.push(p);
            }
        }
        cout << endl;
    }
    return answer;
}

int main(){
	vector<int> v = {1, 2, 3, 3, 3, 2, 1};
	vector<int> answer = solution(v);
	
	cout << "answer: ";
	for(int i=0; i<answer.size(); i++){
		cout << answer[i] << " ";
	}
}
