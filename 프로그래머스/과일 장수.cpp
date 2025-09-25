#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    vector<int> v(k+1, 0);
    int answer = 0, package = m, i, left;
    
    for (i=0; i<score.size(); i++){
        v[score[i]]++;
    }
    
    i=k;
    while(i>0 || (i==1 && v[i] >= package)){  // i가 0보다 크거나 v[1]이 package보다 클 때

		if (v[i] == 0){
            i--;
            continue;
        }
        
		if (v[i] >= package){
			v[i] -= package;
			answer += (i * m);
			package = m;
		} else {
			package -= v[i];
			v[i] = 0;
		}
		
    }
    

    return answer;
}

int main(){
	vector<int> v = {1, 2, 3, 1, 2, 3, 1};
	cout << "answer: " << solution(3, 4, v);
}
